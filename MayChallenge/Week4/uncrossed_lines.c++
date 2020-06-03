class Solution {
public:
    int dp[505][505]={};
    map<int, vector<int>> b_index;
    int rec(vector<int>& A, vector<int>& B, int a, int b){
        if(a>=A.size() || b>=B.size())
            return 0;

        if(dp[a][b] != -1)
            return dp[a][b];

        int mx=0;
        for(int i: b_index[A[a]])
            if(i>=b)
                mx = max(mx, 1+rec(A,B, a+1, i+1));
        mx = max(mx, rec(A,B, a+1, b));
        return dp[a][b] = mx;
    }
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        memset(dp, -1, sizeof dp);

        for(int i=0; i<B.size(); i++)
            b_index[B[i]].push_back(i);

        return rec(A,B,0,0);
    }
};
