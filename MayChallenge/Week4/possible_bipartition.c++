class Solution {
public:
    bool dfs(vector<int>& colors, vector<vector<int>>& graph, int node, int color){
        colors[node] = color;
        for(int neigh: graph[node]){
            if(colors[neigh] == color)
                return 0;
            else if(colors[neigh]==0){
                int newColor = (color==1)? 2: 1;
                bool check = dfs(colors, graph, neigh, newColor);
                if(!check)
                    return 0;
            }
        }
        return 1;
    }
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<vector<int>> graph;
        graph.resize(N+1);
        for(vector<int>edge : dislikes){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        vector<int> colors;
        colors.resize(N+1);
        bool check =1;
        for(int i=1; i<=N; i++){
            if(colors[i]==0)
                check = dfs(colors, graph, i, 1);
            if(!check)
                return 0;
        }

        return 1;
    }
};
