class Solution {
public:
    bool canPartition(vector<int>& nums) {
         int n = nums.size(); 
        //number of objects
        int capacity = accumulate(nums.begin(), nums.end(), 0);
        if((capacity & 1) == 1) return false;
        capacity /= 2;
       
        vector<bool> dp(capacity+1, false);

        dp[0] = true;
        
        for(int i = 1; i <= n; i++){
            for(int j = capacity; j >= 0; j--){
                if(j == 0){
                    dp[j] = false;
                }
                
                if(j - nums[i-1] >= 0){
                    dp[j] = dp[j] | dp[j-nums[i-1]];
                }
            }
        }

        return dp[capacity];
    }
};
