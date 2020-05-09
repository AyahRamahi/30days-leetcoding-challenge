class Solution {
public:
    bool isPerfectSquare(int num) {
        int sr = (int)sqrt(num);
        if (num == sr*sr)
            return 1;
        return 0;
    }
};
