class Solution(object):
    def twoSum(self, nums, target):
        hashMap = {};
        for index, num in enumerate(nums):
            if ((target - num) in hashMap):
                return {index, hashMap[target - num]};
            hashMap[num] = index;
        return ([]);
                
        