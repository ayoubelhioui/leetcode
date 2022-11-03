class Solution {
public:
    void eraseDuplication(vector<int> &nums, int target, int &numsSize)
    {
        for (int i = 0; i < numsSize; i++)
        {
            if (nums[i] == target)
            {
                nums.erase(nums.begin() + i);
                i-=1;
                numsSize--;
            }
        }
            
    }
int thirdMax(vector<int>& nums) {
    int numsSize = nums.size();
    if (numsSize == 1)
        return (nums[0]);
    if (numsSize == 2)
        return (nums[0] > nums[1] ? nums[0] : nums[1]);
    int m1 = nums[0];
    for (int i = 1; i < numsSize; i++)
        if (nums[i] > m1)
            m1 = nums[i];
    eraseDuplication(nums, m1, numsSize);
    int m2 = nums[0];
    for (int i = 1; i < numsSize; i++)
        if (nums[i] > m2)
            m2 = nums[i];
    eraseDuplication(nums, m2, numsSize);
    if (numsSize == 0)
        return (m1);
    int m3 = nums[0];
    for (int i = 1; i < numsSize; i++)
        if (nums[i] > m3)
            m3 = nums[i];
    return (m3);
}
};