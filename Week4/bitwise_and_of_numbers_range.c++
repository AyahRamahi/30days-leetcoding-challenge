class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int result =0;

        int power;
        bool first =0;
        for(int i=30; i>=0; i--){
            power = 1<<i;
            if(power <= m && power <= n){
                result += power;
                m-=power;
                n-=power;
                first = 1;
            }
            else if( !(power>m && power>n))
                    break;
        }

        return result;
    }
};
