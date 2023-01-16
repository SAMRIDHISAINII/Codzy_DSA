
#include<iostream>
#include<vector>
using namespace std;

// function to gernate the pascal traingle
vector<vector<int>> genreate(int numRows){
  // empty vector to store the rsult
  vector<vector<int>> res;
  res.resize(numRows);

  // now we will iterage through each row
  for(int i=0; i<numRows; i++)
    {
      // resizing the current row to the number of col
      res[i].resize(i+1);
      // the first and the last elemt of each row is always 1
      // therefore
      res[i][0] = res[i][j]=1;
      // iterate through each col in the current row
      for (int j = 1; j < i; j++)
            // Calculate the current element by adding the element above and to the left and the element above and to the right
            res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
    }
    // return the result
    return res;
  
}

int main(){
   int numRows;
    cin>>numRows; // input the number of rows
    vector<vector<int>> ans = generate(numRows); // call generate function and store the result in ans
    // Iterate through each element of ans and print it
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

Complexity would be O(n2)
