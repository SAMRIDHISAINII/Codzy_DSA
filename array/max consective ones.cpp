#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // initializing two variables to keep track of the maximum and current number of consecutive 1s
        int max_ones = 0;
        int current_ones = 0;
        // iterating through the array
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                // if current element is 1, increment current_ones
                current_ones++;
            } else {
                // if current element is 0, compare current_ones with max_ones
                // and update max_ones if necessary
                max_ones = max(max_ones, current_ones);
                // reset current_ones to 0
                current_ones = 0;
            }
        }
        // return the maximum of max_ones and current_ones at the end
        return max(max_ones, current_ones);
    }
};

int main() {
    // Initialize a vector
    vector<int> nums = {1, 1, 0, 1, 1, 1, 0, 0, 1, 1};
    // Create an instance of the Solution class
    Solution sol;
    // Call the findMaxConsecutiveOnes function
    int maxOnes = sol.findMaxConsecutiveOnes(nums);
    cout << "Maximum number of consecutive 1s: " << maxOnes << endl;
    return 0;
}
