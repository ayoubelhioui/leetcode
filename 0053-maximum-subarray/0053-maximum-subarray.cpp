class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int maxSub = INT_MIN, a = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            a += nums[i];
            maxSub = max(maxSub, a);
            a = max(a, 0);
        }
        return (maxSub);
    }
};