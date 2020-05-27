class Solution {
public:
    string frequencySort(string s) {
        map<char,int> freq;
        vector<pair<int,char> >v;

        for(char c:s)
            freq[c]++;

        for(auto it=freq.begin(); it!=freq.end(); ++it)
            v.push_back({it->second, it->first});

        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

        string result = "";
        for(pair<int,char>p :v)
            for(int i=0; i<p.first; i++)
                result+=p.second;

        return result;
    }
};
