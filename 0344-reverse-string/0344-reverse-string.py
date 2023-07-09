class Solution(object):
    def reverseString(self, s):
        endIndex = len(s) - 1;
        startIndex = 0;
        while (startIndex < endIndex):
            s[startIndex], s[endIndex] = s[endIndex], s[startIndex];
            startIndex+=1;
            endIndex-=1;
        """
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        """