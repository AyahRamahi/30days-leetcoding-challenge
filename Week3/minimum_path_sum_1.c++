class Solution {
public:
    int xx[2] = {0,1};
    int yy[2] = {1,0};
    int minPath(vector<vector<int>>& grid){
        int mn = 1e9+9;
        priority_queue<pair<int, pair<int, pair<int,int>> >> pq;
        pq.push({0, {grid[0][0],{0,0}}});

        while(!pq.empty()){
            int weight = pq.top().second.first;
            int cost = -1*pq.top().first;
            pair<int,int> cor = pq.top().second.second;
            pq.pop();

            grid[cor.first][cor.second] = -1;
            if(cor.first == grid.size()-1 && cor.second == grid[0].size()-1)
                mn = min(mn, weight + cost);

            for(int i=0; i<2; i++){
                int nx = cor.first + xx[i];
                int ny = cor.second + yy[i];
                if (nx>=grid.size() || ny>=grid[0].size() || grid[nx][ny]==-1)
                    continue;
                pq.push({-1*(cost+weight), {grid[nx][ny], {nx, ny}}});
            }
        }

        return mn;
    }
    int minPathSum(vector<vector<int>>& grid) {
        return minPath(grid);
    }
};
