class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = n+m-2;
        int r = m-1;
        // compute n and r for ncr
        double res =1;
//         initizlisating it as 1
        
        for(int i=1; i<=r; i++)
//           intera for r
            res = res*(N-r+i)/i;
//         for numerator
        return (int)res;
//         as ur number of unique path
        
    }
    
};
