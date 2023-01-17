class Solution {
public:
    int trap(vector<int>& height) {
    // Initialize left and right pointers to the first and last element of the array
    int left = 0, right = height.size() - 1;
    // Initialize a variable to store the total trapped water
    int trappedWater = 0;
    // Continue the loop until the left pointer is less than the right pointer
    while (left < right) {
        // Find the minimum height between the left and right pointer
        int minHeight = min(height[left], height[right]);
        // Check if the height at the left pointer is equal to the minimum height
        if (height[left] == minHeight) {
            // If true, move the left pointer to the right
            left++;
            // Continue moving the left pointer to the right while the height is less than the minimum height and the left pointer is less than the right pointer
            while (left < right && height[left] < minHeight) {
                // Add the difference between the minimum height and the current height at the left pointer to the total trapped water
                trappedWater += minHeight - height[left];
                left++;
            }
        } 
        // If the height at the left pointer is not equal to the minimum height
        else {
            // Move the right pointer to the left
            right--;
            // Continue moving the right pointer to the left while the height is less than the minimum height and the left pointer is less than the right pointer
            while (left < right && height[right] < minHeight) {
                // Add the difference between the minimum height and the current height at the right pointer to the total trapped water
                trappedWater += minHeight - height[right];
                right--;
            }
        }
    }
    // Return the total trapped water
    return trappedWater;
}

};
