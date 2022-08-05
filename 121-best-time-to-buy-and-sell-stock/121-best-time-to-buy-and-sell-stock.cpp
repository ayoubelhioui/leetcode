
#define MAX(x, y)(x > y ? x : y);
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int best_day = prices[0], current_day = 1, max = 0, size = prices.size();
        while (current_day < size)
        {
            if (best_day > prices[current_day])
                best_day = prices[current_day];
            else
                max = MAX(max, prices[current_day] - best_day);
            current_day++;
        }
        
        return (max);
    }
};