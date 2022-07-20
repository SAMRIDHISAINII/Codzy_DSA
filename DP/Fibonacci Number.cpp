// leetcode question number 509. Fibonacci Number
class Solution {
public:
//     dp
    int fib(int n ){
     if(n==0) 
         return 0;
    if(n==1) return 1;
//     return fib(n-1)+fib(n-2);
    
    int result, prev1=1, prev2=0;
    for(int i =2; i<=n; i++)
    {
        result = prev1+prev2;
        prev2= prev1;
        prev1 = result;
        
    }
        return result;
    
    }
};
