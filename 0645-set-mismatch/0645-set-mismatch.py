class Solution(object):
    def findErrorNums(self, nums):
        numFrequency = {};
        result = [0 for _ in range(2)]
        for num in nums:
            numFrequency[num] = numFrequency.get(num, 0) + 1;
        for i in range(1, len(nums) + 1):
            if numFrequency.get(i) == None:
                result[1] = i;
            if numFrequency.get(i) > 1:
                result[0] = i;
        return (result);