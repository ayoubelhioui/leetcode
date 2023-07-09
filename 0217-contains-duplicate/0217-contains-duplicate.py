class Solution(object):
    def containsDuplicate(self, nums):
        my_set = set(nums);
        return (len(nums) != len(my_set));
        