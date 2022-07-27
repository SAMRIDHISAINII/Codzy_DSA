// leetcode
// kadane's algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
//          kadnes algorithm 
        // we need to find small array jiska sum is smallest
//     for finding subarray burte force shoould be sabke sub array sould be check and max sum suba array will be answer
        // 4 to 4 
        
//         brute force
        int sum =0;
        int maxi =INT_MIN;
//       insetead auto we can use the other way to but here i m using auto only 
        for(auto t: nums){
            sum+=t;
            maxi = max(sum, maxi);
            if(sum<0) sum=0;
        }
        return maxi;
    }
};
