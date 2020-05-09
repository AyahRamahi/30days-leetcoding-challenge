class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double slop = (double)(coordinates[1][1] - coordinates[0][1])/(double)(coordinates[1][0] - coordinates[0][0]);
        double x1 = coordinates[0][0];
        double y1 = coordinates[0][1];

        for(vector<int> point: coordinates){
            double temp = slop * (point[0]-x1) + y1;
            if (temp != (double)point[1])
                return 0;
        }
        return 1;
    }
};
