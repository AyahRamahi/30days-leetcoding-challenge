class Solution {
public:
    int xx[4] = {0, 1, 0, -1};
    int yy[4] = {1, 0, -1, 0};

    void dfs (vector<vector<char>>& grid, int x, int y){
        if (grid[x][y] != '1')
            return;
        grid[x][y] = '0';

        for(int i=0; i<4; i++){
            int nx = x + xx[i];
            int ny = y + yy[i];
            if (nx<0 || ny<0 || nx>=grid.size() || ny>=grid[0].size())
                continue;
            dfs(grid, nx, ny);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int comp =0;

       for(int i=0; i<grid.size(); i++){
           for(int j=0; j<grid[i].size(); j++){
               if(grid[i][j] == '1'){
                   dfs(grid, i, j);
                   comp++;
               }
           }
       }

        return comp;
    }
};
