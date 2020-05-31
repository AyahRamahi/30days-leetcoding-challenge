class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        if(k == n)
            return "0";

        string result = "";
        char min_digit;
        int min_index = 0;
        bool leading_zero = 1;

        for(int i=0; i<n-k; i++){
            min_digit = '9';
            for(int j=min_index; j<=k+i; j++)
                if(num[j]<min_digit){
                    min_digit = num[j];
                    min_index = j;
                }

            if(min_digit != '0')
                leading_zero =0;
            if( (!leading_zero && min_digit == '0') || min_digit != '0' )
                result += min_digit;

            min_index ++;
        }
        
        if(result.size() == 0)
            result = "0";
        return result;
    }
};
