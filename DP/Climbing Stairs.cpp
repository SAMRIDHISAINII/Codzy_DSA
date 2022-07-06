// leetcode question number 
// 70 climbing stairs

class Solution {
public:
    int climbStairs(int n) {
         int tmp1 = 1, tmp2 = 2;
        if(1 == n)
            return tmp1;
        if(2 == n)
            return tmp2;
        for(int i = 2; i < n; i++){
            int tmp3 = tmp2;
            tmp2 += tmp1;
            tmp1 = tmp3;
        }
        return tmp2;
    }
};
