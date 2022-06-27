

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int is_full_of_nine(int *digits, int digitsSize)
{
    int i = 0;
    while (i < digitsSize)
    {
        if (digits[i] != 9)
            return (false);
        i++;
    }
    return (true);
}

int *get_new_array(int *digits, int digitsSize, int *a)
{
    int i, j, s = 1;
    if (is_full_of_nine(digits, digitsSize))
    {
        int *new_array = malloc(sizeof(int) * (digitsSize + 1));
        new_array[0] = 1;
        i = 1;
        while (i < digitsSize + 1)
        {
            new_array[i] = 0;
            i++;
        }
        *a = -1;
        return (new_array);
    }
    else
    {
        j = digitsSize - 1;
        while (j >= 0)
        {
            if (digits[j] == 9 && j != 0 && s == 1)
            {
                digits[j] = 0;
                s = 1;
            }
            else
            {
                digits[j] = digits[j] + s;
                s = 0;
            }
            j--;
        }
        a = 1;
        return (digits);
    }
}
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int a = 0;
    int * ret;
    if (digits[digitsSize - 1] != 9)
    {
        digits[digitsSize - 1] = digits[digitsSize - 1] + 1;
        *returnSize = digitsSize;
        return (digits);
    }
    ret = get_new_array(digits, digitsSize, &a);
    if (a == -1)
        *returnSize = digitsSize + 1;
    else
        *returnSize = digitsSize;
    return (ret);
}