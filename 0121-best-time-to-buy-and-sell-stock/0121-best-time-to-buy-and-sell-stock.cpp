class Solution {
public:

    // Find the maximum difference (profit) between the current price and the minimum price encountered so far, by continuously updating the minimum price and the maximum profit.

    int maxProfit(vector<int>& prices) {
        int minUntilNow=INT_MAX;
        int profit=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            minUntilNow=min(minUntilNow,prices[i]);
            profit=max(profit,prices[i]-minUntilNow);
        }
        return profit;
    }
};