class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int candidate = -1;
        int count = 0;
        for(int num: nums) {
            if(count == 0) {
                candidate = num;
            }
            count += (candidate == num)?1:-1;
        }
        return candidate;
    }
};
