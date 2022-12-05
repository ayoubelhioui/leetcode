class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int _max = 0, _min = INT_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            _min = min(_min, prices[i]);
            _max = max(_max, prices[i] - _min);
        }
        return (_max);
    }
};