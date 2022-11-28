class Solution {
public:
    int jump(vector<int>& nums) {
        int numsSize = nums.size(), currentJump = nums[0], maxJump = nums[0], jumps = 1;
        if (numsSize < 2)
            return 0;
        for (int i = 1; i < numsSize - 1; i++)
        {
            maxJump = max(maxJump, nums[i] + i);
            if (currentJump == i)
            {
                jumps++;
                currentJump = maxJump;
            }
        }
        return (jumps);
    }
};