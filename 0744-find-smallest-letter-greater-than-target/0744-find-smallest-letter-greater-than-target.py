class Solution(object):
    def binarySearch(self, letters, target):
        start, end ,tested = 0, len(letters) - 1, 0;
        while start <= end:
            med = (start + end) / 2;
            if (letters[med] > target):
                tested = med;
                end = med -  1;
            else:
                start = med + 1;
        return (letters[tested]);

    def nextGreatestLetter(self, letters, target):
        return (self.binarySearch(letters, target));
