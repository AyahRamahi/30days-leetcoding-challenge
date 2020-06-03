class Solution {
public:
    vector<vector<int>> graph;
    vector<int> visited;

    bool checkCycle(int node){
        if(visited[node] == 2)
            return 0;
        if(visited[node] == 1)
            return 1;

        visited[node]=2;

        bool check = 1;
        for(int neigh: graph[node]){
            check = checkCycle(neigh);
            if (!check)
                return 0;
        }

        visited[node]=1;
        return 1;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        graph.resize(numCourses);
        visited.resize(numCourses);
        fill(visited.begin(), visited.end(),0);

        for(vector<int> prereq: prerequisites)
            graph[prereq[0]].push_back(prereq[1]);

        bool check = 1;
        for(int i=0; i<numCourses; i++)
            if(!visited[i]){
                check = checkCycle(i);
                if (!check)
                    return 0;
            }

        return 1;
    }
};
