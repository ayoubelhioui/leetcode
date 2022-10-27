class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int numsSize = nums.size(), j = numsSize;
        vector<int> result(numsSize * 2);
        for (int i = 0; i < numsSize; i++)
        {
            result[i] = nums[i];
            result[j++] = nums[i];
        }
        return (result);
    }
};