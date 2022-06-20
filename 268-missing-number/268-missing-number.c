
void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	partition(int *a, int start, int end)
{
	int	i;
	int	j;
	int	pivot;

	pivot = a[start];
	i = start + 1;
	j = start + 1;
	while (j <= end)
	{
		if (a[j] >= pivot)
		{
			ft_swap(&a[i], &a[j]);
			i++;
		}
		j++;
	}
	ft_swap(&a[start], &a[i - 1]);
	return (i - 1);
}

void	quick_sort(int *a, int start, int end)
{
	int	i;

	if (end < start)
		return ;
	i = partition(a, start, end);
	quick_sort(a, start, i - 1);
	quick_sort(a, i + 1, end);
}

int missingNumber(int* nums, int numsSize){
    int i = 0, range = numsSize;
    quick_sort(nums, 0, numsSize - 1);
    int j = 0;
    while (i < numsSize)
    {
        if (nums[i] == range)
            range--;
        else
            return (nums[i] + 1);
        i++;
    }
    return (range);
}