class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long global_sum = nums[0], local_sum = nums[0];
        for (int i=1; i<nums.size(); i++){
            local_sum = max((long long)nums[i], local_sum+nums[i]);
            global_sum = max(global_sum, local_sum);
        }
        return global_sum;
    }
};