class Solution(object):
    def hammingDistance(self, x, y):
        result, count = 0, 0;
        while x or y:
            if (x & 1 != y & 1):
                count+=1;
            x = x >> 1;
            y = y >> 1;
        return (count);
                
        