class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int _max = 0, count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            count = 0;
            while (i < nums.size() && nums[i] == 1)
            {
                count++;
                i++;
            }
            _max = max(_max, count);
        }
        return (_max);
    }
};