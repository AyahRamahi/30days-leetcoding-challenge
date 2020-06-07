class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> freq;
        int sum=0, result=0;
        freq[0]=1;
        for(int i:nums){
            sum+=i;
            if(freq[sum-k])
                result+=freq[sum-k];
            freq[sum]++;
        }

        return result;
    }
};
