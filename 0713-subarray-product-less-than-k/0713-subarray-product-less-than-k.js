/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var numSubarrayProductLessThanK = function(nums, k) {
    let count = 0, left = 0, right = 0, sum = 1;
    while (right < nums.length) {
        sum = sum * nums[right];
        count += (nums[right] < k) ? 1 : 0;
        while (sum >= k && left < right)
        {
            sum = sum / nums[left];
            left++;
        }
        count += right++ - left;
    }
    return (count);
};