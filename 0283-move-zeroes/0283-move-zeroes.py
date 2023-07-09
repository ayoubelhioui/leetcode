class Solution(object):
    def moveZeroes(self, nums):
        currentIndex = 0;
        for num in nums:
            if (num != 0):
                nums[currentIndex] = num;
                currentIndex+=1;
        for element in nums[currentIndex:]:
            nums[currentIndex] = 0;
            currentIndex+=1;
        return (nums);n