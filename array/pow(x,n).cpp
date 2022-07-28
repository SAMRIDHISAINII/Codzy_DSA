// leetcode
class Solution {
public:
    double myPow(double x, int n) {
//         if n pos
        
//         what n geg
//         bruteforce
//         n is pos or neg
//         thereforce if we make neg as pos as we require xn hence when we make it pos it will overflow
//         long will be taking
//         on
//         space o1
        // 2n
    
        double ans = 1.0;
long nn = n;
if(nn<0) nn = -1 * nn;
while(nn > 0) {

if(nn % 2 == 1) {
ans = ans * x;
nn = nn - 1;

}
else {
x = x * x;
nn = nn / 2;

}
}
if(n<0) ans = (double) (1.0) / (double)(ans);
return ans;
    }
};
