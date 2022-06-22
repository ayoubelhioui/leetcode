

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void    swap(int *a, int *b)
{
    int c;
    
    c = *a;
    *a = *b;
    *b = c;
}
int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    int start = 0, end = numsSize - 1;
    int *returned_array = malloc(sizeof(int) * (numsSize));
    while (start < end)
    {
        if (nums[start] % 2 != 0 && nums[end] % 2 == 0)
        {
            swap(&nums[start], &nums[end]);
            start++;
            end--;
        }
        else if (nums[start] % 2 != 0 && nums[end] % 2 != 0)
            end--;
        else
            start++;
    }
    *returnSize = numsSize;
    return (nums);
}