
int into_sum_prefix(int *nums, int numsSize)
{
    int i = 0, sum = 0;
    while (i < numsSize)
    {
        sum+= nums[i];
        i++;
    }
    return (sum);
}
int pivotIndex(int* nums, int numsSize){
    int i = 0, total_sum = into_sum_prefix(nums, numsSize), curr_sum = 0;
        for(int i = 0; i < numsSize; i++)
        {
            int left_sum = curr_sum;
            curr_sum += nums[i];
            int right_sum = total_sum - curr_sum;
            if(left_sum == right_sum)
                return i;
        }
    return (-1);
}