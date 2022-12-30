class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0, left = 0, right = 0, sum = 1;
        while (right < nums.size())
        {
            sum *= nums[right];
            count = (nums[right] < k ? count + 1 : count);
            while (sum >= k && left < right)
                sum /= nums[left++];
            count += right++ - left;
        }
        return (count);
    }
};