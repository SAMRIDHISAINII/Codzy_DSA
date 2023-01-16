class Solution {
public:
    int maxProfit(vector<int>& prices) {

        
       int maxPro=0;
    int minPrice=INT_MAX;
    for(int i  = 0; i< prices.size(); i++){
    minPrice=min(minPrice,prices[i]);
    maxPro=max(maxPro,prices[i]-minPrice);
}
return maxPro;
      
    }
// };

// int maxProfit(vector<int>& prices) {
//     int minPrice = INT_MAX;
//     int maxProfit = 0;
//     for (int i = 0; i < prices.size(); i++) {
//         minPrice = min(minPrice, prices[i]);
//         maxProfit = max(maxProfit, prices[i] - minPrice);
//     }
//     return maxProfit;
// // }
