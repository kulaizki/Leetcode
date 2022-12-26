// this solution/idea exceeds the time limit

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int max_profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            for (int j = i+1; j < prices.size(); j++) {
                profit = prices[j] - prices[i];
                if (profit > max_profit) max_profit = profit;  
            }
        }

        return max_profit;
    }
};
