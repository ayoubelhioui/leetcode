/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int *returned_array = malloc(sizeof(int) * numsSize);
    int i = 0, sum = 0;
    while (i < numsSize)
    {
        sum += nums[i];
        returned_array[i] = sum;
        i++;
    }
    *returnSize = numsSize;
    return (returned_array);
}