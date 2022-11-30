class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int currentIndex = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] != 0)
                nums[currentIndex++] = nums[i];
        while (currentIndex < nums.size())
            nums[currentIndex++] = 0;
    }
};