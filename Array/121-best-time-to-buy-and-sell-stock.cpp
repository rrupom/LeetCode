class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int mx = 0;
        int mn = 0;

        int profit = 0;

        for (int i = 1; i < len; i++) {
            if (prices[i] < prices[mn]) {
                // need to change both min and max index. Because it is buying stock day
                mn = i;
                mx = i;
            }
            if (prices[i] > prices[mx]) {
                if (prices[i] - prices[mx] > profit) {
                    profit = prices[i] - prices[mx];
                }
            }
        }

        return profit;
    }
};