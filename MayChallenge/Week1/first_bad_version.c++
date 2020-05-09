// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=1, right=n, mid;
        while(left<=right){
            mid = (1LL*left+1LL*right)/2;
            if(isBadVersion(mid))
                right = mid-1;
            else
                left = mid+1;
        }
        return left;
    }
};
