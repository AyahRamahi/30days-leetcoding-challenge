class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> a(N+3,0);
        for(vector<int> t: trust){
            a[t[1]]++; // trusted
            a[t[0]]--; // trusting
        }
        for(int i=1; i<=N; i++)
            if(a[i] == N-1)
                return i;
        return -1;
    }
};
