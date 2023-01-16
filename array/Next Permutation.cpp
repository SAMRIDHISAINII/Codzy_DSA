// leetcode 
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int n=nums.size();
        if(n==1){
            return;
        }
        
//         the next number
//         brute apporch to interview
//         all th epossiple combos
//         i will take 123 and linear itreate
        
//         what if 321 so whenever th elast order than 123
        
//         optimal approch 
//         algortih m for optimate string or array we have ti trsnverse piche sa
        // and it will be index thing so
        // second shift ind1
//         swap 
//         than reverse index -> last
//         so this is how we will get the permutation
        

        int temp;
        for(int i=n-1;i>=0;i--){
            // for every index if any smaller available on next indices => swap both
            // else sort
            int flag=0;
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[i]){
                    flag=1;
                    temp=nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;
                    break;
                }
            }
            if(flag==0){
                sort(nums.begin()+i,nums.end());
            }else{
                break;
            }
        }
    }
};


Next permutation

#include <iostream>  // Input/output stream
#include <algorithm> // For the reverse() function
#include <vector>    // For the vector data structure
using namespace std;

// Function to find the next permutation of the given array
void nextPermutation(vector<int>& nums) {
    int n = nums.size(); // Store the size of the array
    int i = n - 2; // Start from the second last element
    // Iterate from the end of the array and find the first element that is smaller than its next element
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }
    // If such an element is not found, the array is already the largest possible permutation
    // Reverse the entire array to get the smallest permutation
    if (i >= 0) {
        int j = n - 1;
        // Find the first element from the end of the array that is larger than the element at index i
        while (nums[j] <= nums[i]) {
            j--;
        }
        // Swap the elements at index i and j
        swap(nums[i], nums[j]);
    }
    // Reverse the subarray from index i+1 to the end of the array
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    int n;
    cin >> n; // Input the size of the array
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; // Input the elements of the array
    }
    nextPermutation(nums); // Call the nextPermutation function
    // Iterate through the array and print the next permutation
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}

Complexity O(n)


