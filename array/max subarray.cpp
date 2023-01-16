int maxsubarray(vector<int> &nums) {
  // get the size of the input aray
  int n = nums.size();
  // Initialize the maximum sum to be the first element of the array
  int max_sum = nums[0];
  // Initialize the current sum to be the first element of the array
  int curr_sum = nums[0];
  // Iterate through the array starting from the second element
  for (int i = 1; i < n; i++) {
    // Update the current sum by taking the maximum of the current element or
    // the current sum plus the current element
    curr_sum = max(nums[i], curr_sum + nums[i]);

    // Update the maximum sum by taking the maximum of the current maximum
    max_sum = max(max_sum, curr_sum);
  }
  return max_sum;
}
