#include<iostream>
#include<vector>
using namespace std;

void setzeros(vector<vector<int>>& matrix){
  int m = matrix.size();
  int n = matrix[0].size();

  vector<bool> row(m, false);
  vector<bool> col(n, false);
   // so basically it intilizes the two vector row and col
  // with the same size 

  // bothe vector are intizlied with value false

  // the fucntion then iterates through the matrix usign nexted for loops

 // so if an element is equal to zero 
// then corresponding the row and column are marked as true in row and col vecotr
  
  for(int i=0; i<m; i++)
    {
      for(int j=0; j<n; j++)
        {
          if(matrix[i][j]==0)
          {
            row[i] = true;
            col[j] = true;
          }
        }
    }
  // after the intital pass
   // the function again iterates through the matrix with nested for loops. If the corresponding entry in the "row" vector or the "col" vector is "true," the corresponding matrix entry is set to zero.
  
  for(int i=0; i<m; i++)
    {
      for(int j=0; j<n; j++)
        {
          if(row[i]|| col[j])
          {
            matrix[i][j] = 0;
          }
        }
    }
  
}

int main()
{
  vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
  setzeros(matrix);
  for(int i=0; o<matrix.size(); i++){
    for(int j=0; j<matrix[0].size(); j++)
      {
        cout<<matrix[i][j]<<" ";
      }
    cout<<endl;
  }
  return 0;
}
