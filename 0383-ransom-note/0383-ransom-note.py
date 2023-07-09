class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        first = {};
        for num in magazine:
            first[num] = first.get(num, 0) + 1;
        for num in ransomNote:
            if (num not in first):
                return (False);
            else:
                if (first[num] <= 0):
                    return (False);
                first[num]-=1;
        return (True);
        