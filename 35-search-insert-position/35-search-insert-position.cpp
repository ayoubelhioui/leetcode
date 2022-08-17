class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length = nums.size(), start = 0, end = length - 1, med;
        while (start <= end)
        {
            med = (start + end) / 2;
            if (nums[med] > target)
                end = med - 1;
            else if (nums[med] < target)
                start = med + 1;
            else
                return (med);
        }
        if (start > end)
            return (start);
        return (med);
    }
};