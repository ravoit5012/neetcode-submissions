class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi = prices[0];
        int profit = 0;
        for(int i = 1; i < prices.size(); i++){
            profit = max(profit, prices[i]-mi);

            if(prices[i]<mi) mi = prices[i];
        }
        return profit;
    }
};
