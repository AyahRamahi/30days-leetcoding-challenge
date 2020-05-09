class Solution {
public:
    int numJewelsInStones(string J, string S) {
        bool jewels [55] = {};
        for(char j: J){
            if(j>='A' && j<='Z')
                jewels[j-'A'+26] =1;
            else
                jewels[j-'a'] = 1;
        }

        int result =0;
        for(char s: S)
            if(s>='A' && s<='Z')
                result+= (int)jewels[s-'A'+26];
            else
                result += (int)jewels[s-'a'];

        return result;
    }
};
