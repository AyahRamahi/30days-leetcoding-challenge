class Solution {
public:
    int findComplement(int num) {
        int result =0, temp;
        bool bit=0, start=0;
        for (int i=30; i>=0; i--){
            temp = 1<<i;
            if(num>=temp){
                start = 1;
                bit =1;
                num -= temp;
            }
            if(start)
                result += (!bit)*temp;
            bit=0;
        }
        return result;
    }
};
