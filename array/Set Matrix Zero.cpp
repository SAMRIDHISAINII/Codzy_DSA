// leetcode
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
//         first approch burte force
//         what the value of matrix like if all the value will be postive number
//         traverse for intire column 
//         traverse for entire row
        
//         we will set it as -1
//         time complexity for linear traversing so o1
//         optimize the approch
        
//         lets take two dummy array 
//         column index zero and row index 0 
        int col =1, rows = matrix.size(), column = matrix[0].size();
        
        for(int i=0; i<rows; i++)
        {
            if(matrix[i][0]==0) col =0;
            for(int j=1; j<column; j++)
                if (matrix[i][j]==0)
                    matrix[i][0] = matrix[0][j] =0;
        }
        
        for(int i= rows-1; i>=0; i--)
        {
            for(int j=column-1; j>=1; j--)
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] =0;
            if(col ==0) matrix[i][0]=0;
        }
        
    }
};
