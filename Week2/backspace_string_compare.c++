class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string s="", t="";
        for(int i=S.size()-1,h=0; i>=0; i--){
            if(S[i]=='#')
                h++;
            else{
                if(h)
                    h--;
                else
                    s+=S[i];
            }
        }
        for(int i=T.size()-1,h=0; i>=0; i--){
            if(T[i]=='#')
                h++;
            else{
                if(h)
                    h--;
                else
                    t+=T[i];
            }
        }
        return (s==t);
    }
};