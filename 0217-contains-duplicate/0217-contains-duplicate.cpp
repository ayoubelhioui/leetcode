class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            if (i < size - 1 && nums[i] == nums[i + 1])
                return (true);
        }
        return (false);
    }
};