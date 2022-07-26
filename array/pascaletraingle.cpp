// 118. Pascal's Triangle
leetcode


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
          vector<vector<int>> r(numRows);
//         traves for n rows
        for(int i=0; i<numRows; i++)
        {
            // resizeing the empty vector
            r[i].resize(i+1);
            r[i][0] = r[i][i]=1;
//             every time was 1 so 
//             linear traverse to second last column 
            for(int j=1; j<i; j++)
                
                r[i][j] = r[i-1][j-1]+r[i-1][j];
        }
        return r;
    }
};

// 4C0 =1 
//     4C1 =4
// //     

// TIME COMPLEXITY EVERY ROW AND COLUM SIMUTANEOUSLY
// FORMULA N AND COLUMN PSACL TRINGALE ON O1 TIME COMPLEXOTY
// IF EVERY N THAN O(N)
