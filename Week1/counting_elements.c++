class Solution {
public:
    int countElements(vector<int>& arr) {
        bool count[1002]={};
        int result =0;
        for (int num: arr)
            count[num]=1;
        for (int num: arr){
            result += (int)(count[num+1]);
        }
        return result;
    }
};