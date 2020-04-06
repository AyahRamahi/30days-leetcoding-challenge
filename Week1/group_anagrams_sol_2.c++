class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, int> mp;
        int sz=0;
        string temp;
        vector<vector<string>> result;

        for(string str: strs){
            vector<int> temp(26);
            for(char c: str)
                temp[c-'a']++;
            
            string temp3 = "";
            for(int i: temp)
                temp3 +='#'+i;
            
            if(mp.find(temp3) == mp.end()){ // doesn't exist
                vector<string> temp2;
                temp2.push_back(str);
                result.push_back(temp2);
                mp[temp3] = sz+1;
                sz++;
            }
            else{ // exists
                result[mp[temp3]-1].push_back(str);
            }
        }
        return result;
    }
};