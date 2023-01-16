// //{ Driver Code Starts
// //Initial template for C++

// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// //User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        
        if(n==0)
        return 0;
        int i=0;
        for(int j=0; j<n; j++)
        {
            if(a[j]!=a[i])
            {
                i++;
                a[i]=a[j];
            }
        }
        return i+1;
    }
};

// //{ Driver Code Starts.
// int main()
// {
//     int T;
//     cin>>T;
//     while(T--)
//     {
//         int N;
//         cin>>N;
//         int a[N];
//         for(int i=0;i<N;i++)
//         {
//             cin>>a[i];
//         }
//     Solution ob;
//     int n = ob.remove_duplicate(a,N);

//     for(int i=0;i<n;i++)
//         cout<<a[i]<<" ";
//     cout<<endl;
//     }
// }
// // } Driver Code Ends

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    // Initialize two pointers, i and j
    int i = 0, j = 1;
    // Iterate through the vector starting from the second element
    while (j < nums.size()) {
        // If the current element at i is not equal to the current element at j
        if (nums[i] != nums[j]) {
            // Increment i and copy the element at j to the next position
            i++;
            nums[i] = nums[j];
        }
        // Increment j to move to the next element
        j++;
    }
    // Return the new size of the vector after duplicates have been removed
    return i + 1;
}

int main() {
    // Initialize a vector
    vector<int> nums = {1, 2, 2, 3, 3, 4, 5, 5, 6};
    // Call the removeDuplicates function
    int newSize = removeDuplicates(nums);
    cout << "New size of vector after removing duplicates: " << newSize << endl;
    // Print the vector after removing duplicates
    cout << "Vector after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
