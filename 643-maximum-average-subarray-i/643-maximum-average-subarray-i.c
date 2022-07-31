

#define MAX(x, y)(x > y ? x : y);
double findMaxAverage(int* nums, int numsSize, int k){
    double result = 0, sum = 0;
    int i = 0;
    while (i < k)
        sum += nums[i++];
    result = sum;
    while (i < numsSize)
    {
        sum += nums[i] - nums[i - k];
        result = MAX(sum, result);
        i++;
    }
    return (result / k);
}