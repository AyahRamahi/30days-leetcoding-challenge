class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = floor(nums.size()/2.0);
        map<int,int> frequency;
        for(int num: nums){
            fequency[num]++;
            if(frequency[num] >n)
                return num;
        }
        return nums[nums.size()-1];
    }
};
