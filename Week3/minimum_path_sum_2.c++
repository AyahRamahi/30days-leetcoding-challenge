class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>> costs(n, vector<int>(m,INT_MAX));
        costs[0][0]=grid[0][0];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i>0)
                    costs[i][j] = min(costs[i][j], costs[i-1][j]+grid[i][j]);
                if(j>0)
                    costs[i][j] = min(costs[i][j], costs[i][j-1]+grid[i][j]);
            }
        }
        return costs[n-1][m-1];
    }
};
