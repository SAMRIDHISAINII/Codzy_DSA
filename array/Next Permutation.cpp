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
