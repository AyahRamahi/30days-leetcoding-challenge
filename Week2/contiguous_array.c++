class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> visited;
        int sum=0, len=0;
        visited[0]=1;

        for(int i=0; i<nums.size(); i++){
            sum += (nums[i]==0)? -1:1;
            if(visited[sum])
                len = max(len, i-visited[sum]+2);
            else
                visited[sum] = i+2;
        }
        return len;
    }
};
