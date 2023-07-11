class Solution(object):
    def merge(self, nums1, m, nums2, n):
        last = n + m - 1;
        while n > 0 and m > 0:
            if (nums1[m - 1] > nums2[n - 1]):
                nums1[last] = nums1[m - 1];
                m -= 1;
            elif (nums1[m - 1] <= nums2[n - 1]):
                nums1[last] = nums2[n - 1];
                n -= 1;
            last -= 1;
        while n > 0:
            nums1[last] = nums2[n - 1];
            n -= 1;
            last -= 1;
        return (nums1);