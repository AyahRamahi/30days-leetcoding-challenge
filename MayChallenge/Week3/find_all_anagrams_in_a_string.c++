class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int freq_p[30] = {};
        int freq_s[30] = {};
        vector<int> result;

        if(s.size()==0 || p.size()==0 || p.size()>s.size())
            return result;

        for(char c:p)
            freq_p[c-'a']++;

        for(int i=0; i<=s.size()-p.size(); i++){
            for(int j=0; j<p.size(); j++)
                freq_s[s[i+j]-'a']++;

            bool check=1;
            for(int j=0; j<28; j++)
                if(freq_p[j] != freq_s[j]){
                    check=0; break;
                }

            if(check)
                result.push_back(i);

            memset(freq_s, 0, sizeof freq_s);
        }

        return result;
    }
};
