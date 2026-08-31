//best time to buy and sell stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxP = 0;
        int n=prices.size();
        for(int i = 1; i < n; i++) {
                if(prices[i] < minPrice) {
                minPrice = prices[i];
            }
            int profit = prices[i] - minPrice;
             maxP = max(maxP, profit);
        }
         return maxP;
    }
};