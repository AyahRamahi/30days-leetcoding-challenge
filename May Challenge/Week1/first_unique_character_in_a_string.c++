class Solution {
public:
    int firstUniqChar(string s) {
        int letters[27]={};

        for(char c: s)
            letters[c-'a']++;

        for(int i=0; i<s.size(); i++)
            if(letters[s[i]-'a']==1)
                return i;

        return -1;
    }
};
