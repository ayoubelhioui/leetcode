class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int numsSize = nums.size(), result = 0;
        for (int i = 0; i <= numsSize; i++)
            result ^= i;
        for (int i = 0; i < numsSize; i++)
                result ^= nums[i];
        return (result);
    }
};