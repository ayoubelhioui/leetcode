#include <algorithm>
#include <vector>
class Solution {
public:
    void    binarySearch(vector<int> &result, int target, vector<int> &nums)
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
                if (find(result.begin(), result.end(), target) == result.end())
                    result.push_back(target);
                return ;
            }
        }
        return ;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int nums1Size = nums1.size();
        int nums2Size = nums2.size();
        vector<int> result;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        if (nums1Size <= nums2Size)
        {
            for (int i = 0; i < nums1Size; i++)
                binarySearch(result, nums1[i], nums2);
        }
        else
        {
             for (int i = 0; i < nums2Size; i++)
                binarySearch(result, nums2[i], nums1);
        }
        return (result);
    }
};