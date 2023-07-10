class Solution(object):
    def isAnagram(self, s, t):
        firstArray = {};
        secondArray = {};
        for char in s:
            firstArray[char] = firstArray.get(char, 0) + 1;
        for char in t:
            secondArray[char] = secondArray.get(char, 0) + 1;
        return (firstArray == secondArray);