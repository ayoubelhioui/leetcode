class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int size = nums.size(), med = 0, start = 0, end = size - 1;
        sort(nums.begin(), nums.end());
        while (start <= end)
        {
            med = (start + end) / 2;
            if (nums[med] > original)
                end = med - 1;
            else if (nums[med] < original)
                start = med + 1;
            else 
            {
                original *= 2;
                end = size - 1;
            }
        }
        
        return (original);
    }
};