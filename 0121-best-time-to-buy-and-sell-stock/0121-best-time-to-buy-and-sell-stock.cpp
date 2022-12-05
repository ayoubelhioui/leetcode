class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int _max = 0, bestDay = 0, currentDay = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < prices[bestDay])
                bestDay = i;
            else
                _max = max(_max, prices[i] - prices[bestDay]);
        }
        return (_max);
    }
};