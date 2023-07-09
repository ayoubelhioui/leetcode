class Solution(object):
    def binarySearch(self, nums, target):
        start, end = 0, len(nums) - 1;
        
        while start <= end:
            med = (start + end) / 2;
            if nums[med] > target:
                end = med - 1;
            elif nums[med] < target:
                start = med + 1;
            else:
                return (med);
        return (start);
    def searchInsert(self, nums, target):
        return (self.binarySearch(nums, target));
        
        