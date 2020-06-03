class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        priority_queue<pair<int,vector<int>>> pq;
        for(vector<int>point: points){
            if(pq.size()<K)
                pq.push({pow(point[0],2)+pow(point[1],2), point});
            else{
                int temp = pq.top().first;
                int distance = pow(point[0],2)+pow(point[1],2);
                if(distance < temp){
                    pq.pop();
                    pq.push({distance, point});
                }
            }

        }
        vector<vector<int>> result;
        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
