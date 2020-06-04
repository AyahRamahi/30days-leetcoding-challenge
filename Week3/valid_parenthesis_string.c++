class Solution {
public:
    bool checkValidString(string s) {
        int l=0, h =0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '(')
                l++,h++;
            else if(s[i] == '*')
                l--,h++;
            else
                l--,h--;

            if(h<0)
                return 0;

            l = max(l,0);
        }

        return l == 0;
    }
};
