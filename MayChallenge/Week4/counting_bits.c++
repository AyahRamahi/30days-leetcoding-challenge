class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result(num+1, 0);
        int count =0, power = 2;
        for(int i=1; i<=num; i++){
            if(i == power)
                count=0, power = power << 1;

            result[i] = result[count]+1;
            count++;
        }
        return result;
    }
};
