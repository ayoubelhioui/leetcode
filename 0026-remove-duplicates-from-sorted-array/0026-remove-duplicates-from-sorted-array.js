/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let set = new Set();
    for (let i = 0; i < nums.length; i++)
        if (!set.has(nums[i]))             
            set.add(nums[i]);
    let i = 0;
    set.forEach(value => { 
        nums[i] = value;
        i++;
    })
    while (i < nums.length)
        nums[i++] = '_';
     return (set.size);
};