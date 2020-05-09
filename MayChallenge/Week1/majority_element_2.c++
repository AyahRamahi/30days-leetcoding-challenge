class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = floor(nums.size()/2.0);
        int len = 1;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1])
                len++;
            else{
                if(len>n)
                    return nums[i-1];
                len=1;
            }
        }
        return nums[nums.size()-1];
    }
};
