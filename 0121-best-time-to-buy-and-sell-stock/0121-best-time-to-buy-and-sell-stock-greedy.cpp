class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0, maxPrice = prices[n-1];

        for(int i = n-2; i >= 0; i--){
            profit = max(maxPrice - prices[i], profit);
            maxPrice = max(maxPrice, prices[i]);
        }
        return profit;
    }
};