class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        _max = 0;
        count = 0;
        for num in nums:
            if (num == 1):
                count = count + 1;
            else:
                _max = max(_max, count);
                count = 0;
        _max = max(_max, count);
        return (_max);