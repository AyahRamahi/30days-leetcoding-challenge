class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        int i=0, j=0;
        vector<int>a;
        vector<int>b;
        vector<vector<int> > result;

        while(i<A.size() && j<B.size()){
            a = A[i];
            b = B[j];

            if(a[0]>=b[0] && a[0]<=b[1]){
                if(a[1]>b[1]){
                    vector<int> v;
                    v.push_back(a[0]);
                    v.push_back(b[1]);
                    result.push_back(v);
                    j++;
                    if(a[1] == b[1])
                        i++;
                }
                else{
                    vector<int> v;
                    v.push_back(a[0]);
                    v.push_back(a[1]);
                    result.push_back(v);
                    i++;
                }

            }
            else if(a[0] < b[0]){
                if(a[1]>=b[0] && a[1]<=b[1]){
                    vector<int> v;
                    v.push_back(b[0]);
                    v.push_back(a[1]);
                    result.push_back(v);
                    i++;
                    if(a[1] == b[1])
                        j++;
                }
                else if (a[1] > b[1]){
                    vector<int> v;
                    v.push_back(b[0]);
                    v.push_back(b[1]);
                    result.push_back(v);
                    j++;
                }
                else
                    i++;
            }
            else
                j++;
        }

        return result;
    }
};
