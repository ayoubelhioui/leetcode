class Solution(object):
    def maxPower(self, s):
        _max = 0;
        for i, num in enumerate(s):
            savior = i;
            while i < len(s) - 1 and s[i] == s[i + 1]:
                i+=1;
            _max = max(_max, i - savior + 1);
        return (_max);