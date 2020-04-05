class Solution {
public:
    int square_digit(int n){
        int temp =0;
        while(n){
            temp += (n%10)*(n%10);
            n/=10;
        }
        return temp;
    }
    bool is_loop(int n){
        int loop_nums[] = {145,42,30,4,16,37,58,89};
        for(int i=0; i<8; i++)
            if(n==loop_nums[i])
                return true;
        return false;
    }
    bool isHappy(int n) {
        while(1){
            n = square_digit(n);
            if (n==1)
                break;
            if (is_loop(n))
                return false;
        }
        return true;
    }
};