class Solution(object):
    def maximumProduct(self, nums):
        nums.sort();
        size = len(nums) - 1;
        return max(nums[size]*nums[size-1]*nums[size-2], nums[size]*nums[0]*nums[1]);