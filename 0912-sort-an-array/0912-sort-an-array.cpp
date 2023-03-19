class Solution {
public:

    void    merge(vector<int> &nums, int left, int middle, int right)
    {
        int l = left, m = middle + 1, size = right - left + 1, resultIndex = 0;
        std::vector<int> result(size, 0);
        while (l <= middle && m <= right)
        {
            if (nums[l] < nums[m])
                result[resultIndex++] = nums[l++];
            else
                result[resultIndex++] = nums[m++];
        }
        while (l <= middle)
            result[resultIndex++] = nums[l++];
        while (m <= right)
            result[resultIndex++] = nums[m++];
        for (int i = 0; i < size; i++)
            nums[i + left] = result[i];
    }

    void    mergeSort(vector<int>& nums, int left, int right)
    {
        if (left >= right)
            return ;
        int middle = (left + right) / 2;
        mergeSort(nums, left, middle);
        mergeSort(nums, middle + 1, right);
        merge(nums, left, middle, right);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return (nums);
    }
};