class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int letters[28]={};

        for(char letter: magazine)
            letters[letter-'a']++;

        for(char letter: ransomNote){
            if(letters[letter-'a'])
                letters[letter-'a']--;
            else
                return 0;
        }
        return 1;
    }
};
