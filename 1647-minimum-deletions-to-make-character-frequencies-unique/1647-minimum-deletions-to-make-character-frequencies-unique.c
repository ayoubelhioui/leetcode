

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

void    fill_array(char *s, int *array)
{
    int i = 0;
    while (s[i])
        array[s[i++] - 'a']++;
    quick_sort(array, 0, 25);
}

int minDeletions(char * s){
    int a[26] = {0}, i = 0, count = 0;
    fill_array(s, a);
    int j = 0;
    while (j < 26)
        printf("it Is : %d\n", a[j++]);
    while (i < 25)
    {
        if (a[i] == 0)
        {
            i++;
            while (a[i] != 0)
                count+=a[i++];
            return (count);
        }
        else if (a[i] == a[i + 1])
        {
            while (a[i] == a[i + 1])
            {
                a[i + 1] -=1;
                count++;
            }
        }
        else if (a[i] < a[i + 1])
        {
            count+=a[i + 1] - a[i] + 1;
            a[i + 1]  = a[i] - 1;
        }
        i++;
    }
    return (count);
}