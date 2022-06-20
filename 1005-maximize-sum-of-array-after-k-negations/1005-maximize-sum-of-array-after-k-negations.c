int cmp(const int *a, const int *b)
{
    return *((int *)a) - *((int *)b);
}
int largestSumAfterKNegations(int* nums, int numsSize, int k){

    
    int sum = 0;
    
    qsort(nums, numsSize, sizeof(int), cmp);
    
    for (int i = 0; i < numsSize && k; i++) {
        if (nums[i] < 0) {
            nums[i] = -nums[i];
            k--;
        }
    }
    qsort(nums, numsSize, sizeof(int), cmp);
    
    if (k & 0x01) {
        nums[0] = -nums[0];
    }
    
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }
    
    return sum;
}