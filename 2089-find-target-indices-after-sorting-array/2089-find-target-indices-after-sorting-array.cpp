class Solution {
public:
    int findFirstOccurence(vector<int> &nums, int target, int size)
    {
        int start = 0, end = size - 1, med = 0;
        while (start <= end)
        {
            med = (start + end) / 2;
            if (nums[med] > target)
                end = med - 1;
            else if (nums[med] < target)
                start = med + 1;
            else
            {
                if (med == 0)
                    return (med);
                if (med > 0 && nums[med - 1] < target)
                    return (med);
                else if (med > 0 && nums[med - 1] == target)
                    end = med - 1;
            }
        }
        return -1;
    }
    
    int findLastOccurence(vector<int> &nums, int target, int size)
    {
        int start = 0, end = size - 1, med = 0;
        while (start <= end)
        {
            med = (start + end) / 2;
            if (nums[med] > target)
                end = med - 1;
            else if (nums[med] < target)
                start = med + 1;
            else
            {
                if (med == size - 1)
                    return (med);
                if (med < size && nums[med + 1] > target)
                {
                    return (med);
                }
                else if (med < size && nums[med + 1] == target)
                {
                    // printf("here\n");
                    start = med + 1;
                }
                    
            }
        }
        return -1;
    }
    
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int size = nums.size(), firstIndex = 0, secondIndex = 0;
        vector<int> result;
        firstIndex = findFirstOccurence(nums, target, size);
        secondIndex = findLastOccurence(nums, target, size);
        if (firstIndex == -1)
            return (result);
        while (firstIndex <= secondIndex)
            result.push_back(firstIndex++);
        return (result);
    }
};