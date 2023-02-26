#include <vector>

class Solution{   
public:
    int countPaths(int N){
        int mod = 1e9 + 7;
        std::vector<std::vector<int>> graph(4, std::vector<int>(4, 1)); 
      // creating fully connected graph
        std::vector<int> old_dp(4, 0), new_dp(4, 0);
        old_dp[0] = 1;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < 4; j++) {
                new_dp[j] = 0;
                for(int k = 0; k < 4; k++) {
                    new_dp[j] = (new_dp[j] + (long long)old_dp[k] * graph[k][j]) % mod;
                }
            }
            old_dp = new_dp;
        }
        return old_dp[0];
    }
};
