class Solution(object):
    def isMonotonic(self, nums):
        if (len(nums) == 1):
            return (True);
        isIncreasing = False;
        if (nums[0] > nums[len(nums) - 1]):
            isIncreasing = True;
        for i, num in enumerate(nums):
            if (i == len(nums) - 1):
                break ;
            if ((nums[i] > nums[i + 1] and isIncreasing == False) or (nums[i] < nums[i + 1] and isIncreasing == True)):
                return (False);
        return (True);