class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int result =0;
        for(int i=0; i<shift.size(); i++)
            if(!shift[i][0])
                result += shift[i][1];
            else
                result -= shift[i][1];
        
        int sz=s.size();
        s+=s;
        string new_s=s;
        if(result<0){ // shift right
            result = abs(result) % sz;
            new_s = s.substr(sz-result, sz);
        }
        else if(result>0){ // shift left
            result = result % sz;
            new_s = s.substr(result, sz);
        }
        return new_s;
    }
};