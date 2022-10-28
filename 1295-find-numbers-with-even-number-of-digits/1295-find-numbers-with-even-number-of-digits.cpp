class Solution {
public:
     bool isEven(int digit)
    {
        int count = 0;
        while (digit > 0)
        {
            digit /= 10;
            count++;
        }
        return (count % 2 == 0);
    }
    int findNumbers(vector<int>& nums) {
        int numsSize = nums.size(), result = 0;
        for (int i = 0; i < numsSize; i++)
            if (isEven(nums[i]))
                result++;
        return (result);
    }
};