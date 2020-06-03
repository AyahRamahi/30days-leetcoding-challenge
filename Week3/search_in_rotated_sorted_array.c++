class Solution {
public:
    int find(vector<int>& nums, int target, int l, int r){
        int mid = (l+r)/2;

        if(target == nums[mid])
            return mid;

        if(r <= l)
            return -1;

        if(nums[l] <= nums[mid]){ // first array
            if(target>=nums[l] && target<=nums[mid]){
                return find(nums, target, l, mid-1);
            }
            else{
                return find(nums, target, mid+1, r);
            }
        }
        else{ // second array
            if(target>=nums[mid] && target<=nums[r])
                return find(nums, target, mid+1, r);
            else
                return find(nums, target, l, mid-1);
        }
        return -1;

    }
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0)
            return -1;

        return find(nums, target, 0, nums.size()-1);
    }
};
