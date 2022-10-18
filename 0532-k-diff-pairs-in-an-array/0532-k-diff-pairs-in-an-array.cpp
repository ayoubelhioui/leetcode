class Solution {
public:
    
    int binarySearch(vector<int> &nums, int start, int target, int size)
    {
        int   end = size - 1, med = 0;
        while (start <= end)
        {
            med = (start + end) / 2;
            if (nums[med] > target)
                end = med - 1;
            else if (nums[med] < target)
                start = med + 1;
            else
                return (1);
        }
        return (0);
    }
    
    int findPairs(vector<int>& nums, int k) {
        int size = nums.size(), result = 0, solution = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < size; i++)
        {
            if (i >= 1 && nums[i] == nums[i - 1])
                continue;
            solution = nums[i] + k;
            if (binarySearch(nums, i + 1, solution, size) == 1)
                result++;
        }
        return (result);
    }
};