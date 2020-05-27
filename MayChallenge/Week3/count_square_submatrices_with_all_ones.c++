class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int result = 0;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(i==0 && j>0)
                    matrix[i][j] += matrix[i][j-1];
                else if(j==0 && i>0)
                    matrix[i][j] += matrix[i-1][j];
                else if(j>0 && i>0)
                    matrix[i][j] += matrix[i-1][j] + matrix[i][j-1] - matrix[i-1][j-1];
            }
        }


        for(int i=0; i<matrix.size(); i++)
            for(int j=0; j<matrix[0].size(); j++)
                for(int k=0; k<=min(i,j); k++){
                    int sum = matrix[i][j];
                    int ii = i-k-1, jj=j-k-1;
                    if(ii>=0)
                        sum -= matrix[ii][j];
                    if(jj>=0)
                        sum -= matrix[i][jj];
                    if(ii>=0 && jj>=0)
                        sum += matrix[ii][jj];

                    if( (k+1)*(k+1) == sum )
                        result +=1;
                }

        return result;

    }
};
