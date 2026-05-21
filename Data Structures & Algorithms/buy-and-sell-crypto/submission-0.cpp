class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int best = 0;

        for (int price : prices)
        {
            mini = min(mini, price);

            best = max(best, price - mini);
        }

        return best;
    }
};
