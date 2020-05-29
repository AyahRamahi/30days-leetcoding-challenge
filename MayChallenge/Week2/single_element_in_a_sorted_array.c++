class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return nums[0];

        int l=0, r =nums.size()-1, mid,m;
        while(l<=r){
            mid = (l+r)/2;
            m = nums[mid];
            if( (mid==n-1 && m!=nums[mid-1]) || (mid==0 && m!=nums[mid+1]) || (mid>0 && mid<n-1 && m!=nums[mid-1] && m!=nums[mid+1]))
                return m;

            if(m==nums[mid-1]){
                if(mid % 2 == 0)
                    r = mid - 2;
                else
                    l = mid + 1;
            }
            else{
                if( (n-1 - mid) % 2 == 0)
                    l = mid +2;
                else
                    r = mid - 1;
            }
        }
        return nums[mid];
    }
};
