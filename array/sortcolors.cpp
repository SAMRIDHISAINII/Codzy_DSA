class Solution {
public:
    void sortColors(vector<int>& nums) {
//         first solution we wil sort the array 
        // o(nlogn)
        
        // we can optimize using counting sort
//         in htis pass we will be many so 
//         0(2n)
        
//         hence we need to pass
//         so 
    // we might need in one pass  
//         dutch nathional flag algo
        
//         we need to see pointer
        
        // mid pointer low high
        // so we need to check 
        // when mid tell 0 
//             swap
        
        // taking three condition in mind
        // mid towards the right
        
        int low =0;
            int high = nums.size()-1;
        int mid =0;
        
        while(mid<=high){
            // so using switch her
            switch (nums[mid]){
                case 0:
                    swap(nums[low++], nums[mid++]);
                    break;
                    
                    // now check like if element is 1
                case 1:
                    mid++;
                    break;
                    
                case 2:
                    swap(nums[mid], nums[high--]);
                    break;
            }
        }
    }
};


// 0s 1s 2s
// void sortColors(vector<int>& nums) {
//     int left = 0; //pointer at the beginning of the array
//     int right = nums.size() - 1; //pointer at the end of the array
//     int cur = 0; //pointer at the current position of the array
//     while (cur <= right) { //loop until the cur pointer reach the end
//         if (nums[cur] == 0) {
//             swap(nums[cur], nums[left]); //swap the cur and left pointers
//             cur++; 
//             left++;
//         } else if (nums[cur] == 2) {
//             swap(nums[cur], nums[right]); //swap the cur and right pointers
//             right--;
//         } else {
//             cur++;
//         }
//     }
// }
