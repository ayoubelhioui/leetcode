class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, med;
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
        return (-1);
    }
};