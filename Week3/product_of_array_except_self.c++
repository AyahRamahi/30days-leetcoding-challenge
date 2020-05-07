class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.size()<2)
            return nums;

        int n = nums.size(), temp=1;
        vector<int> result(n);

        result[0]=1;
        temp = nums[0];
        for(int i=1; i<n; i++){
            result[i] = temp;
            temp *= nums[i];
        }

        temp = nums[n-1];
        for(int i=n-2; i>=0; i--){
            result[i]*=temp;
            temp*=nums[i];
        }

        return result;
    }
};
