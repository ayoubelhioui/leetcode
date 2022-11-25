class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int numsSize = nums.size(), start = 0, end = numsSize - 1, med = 0;
        sort(nums.begin(), nums.end());
        while (start <= end)
        {
            med = (start + end) >> 1;
            if (nums[med] == med)
                start = med + 1;
            else if (nums[med] != med)
                end = med - 1;
        }
        return (start);
    }
};