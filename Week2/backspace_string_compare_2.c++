class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int i=S.size()-1, j=T.size()-1;
        int s=0,t=0;
        while(i>=0 || j>=0){
            while(i>=0){
                if(S[i]=='#')
                    i--,s++;
                else if(s>0)
                    i--,s--;
                else
                    break;
            }
            
            while(j>=0){
                if(T[j]=='#')
                    j--,t++;
                else if(t>0)
                    j--,t--;
                else
                    break;
            }
            
            
            if(i>=0 && j>=0 && S[i] != T[j])
                return 0;
            if((i>=0 && j<0) || (i<0 && j>=0))
                return 0;
            i--,j--;
        }
        return 1;
    }
};