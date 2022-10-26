class Solution {
public:

    bool binarySearch(vector<int> &nums, int target)
    {
        int start = 0, end = nums.size() - 1, med = 0;
        while (start <= end)
        {
            med = (start + end) / 2;
            if (nums[med] > target)
                end = med - 1;
            else if (nums[med] < target)
                start = med + 1;
            else
            {
                nums.erase(nums.begin() + med);
                return (true);
            }
        }
        return (false);
    }
    void    findElement(vector<int> &small, vector<int> &big, vector<int> &result)
    {
        for (auto i : small)
        {
            if (binarySearch(big, i))
                result.push_back(i);
        }
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
        vector<int> result;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int nums1Size = nums1.size(), nums2Size = nums2.size();
        if (nums1Size < nums2Size)
            findElement(nums1, nums2, result);
        else
            findElement(nums2, nums1, result);
        return (result);
    }
};