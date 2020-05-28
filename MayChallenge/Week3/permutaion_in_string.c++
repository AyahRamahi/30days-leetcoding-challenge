class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        if(n2<n1 || (n1==0 && n2>0) || (n2==0 && n1>0))
            return 0;

        int freq1[30]={};
        int freq2[30]={};
        for(char c:s1)
            freq1[c-'a']++;

        int ptr1=0,ptr2=0;
        for(ptr2; ptr2<n1-1; ptr2++)
            freq2[s2[ptr2]-'a']++;


        while(ptr2<n2){
            freq2[s2[ptr2]-'a']++;

            bool check=1;
            for(int i=0; i<28 ; i++)
                if(freq1[i] != freq2[i]){
                    check =0; break;
                }
            if(check)
                return 1;

            freq2[s2[ptr1]-'a']--;
            ptr1++, ptr2++;
        }
        return 0;
    }
};
