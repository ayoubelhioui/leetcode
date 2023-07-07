/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let count = 0, _max = 0;
    for (let i = 0; i < nums.length; i++)
    {
        if (nums[i] == 0)
            count= 0;
        else 
        {
            count++;
            _max = Math.max(_max, count);
        }
    }
    return (_max);
};