class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        my_map = {};
        for index, value in enumerate(nums):
            if value in my_map:
                if (abs(index - my_map[value]) <= k):
                    return (True);
                else:
                    my_map[value] = index;
            else:
                my_map[value] = index;
        return (False);
            