#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0, sum = 0, min_window = INT_MAX, length = nums.size();
        for (right = 0; right < length; right++)
        {
            sum += nums[right];
            while (sum >= target)
            {
                min_window = std::min(min_window, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return (min_window == INT_MAX ? 0 : min_window);
    }
};