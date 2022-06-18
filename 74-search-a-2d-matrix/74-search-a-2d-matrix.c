
int search(int* nums, int numsSize, int target){
    int start = 0, end = numsSize - 1, i = 0,med;
    while (start <= end)
    {
      med = (start + end) / 2;
       if (target == nums[med])
            return (med);
        else if (target > nums[med])
            start = med + 1;
        else
            end = med - 1;
    }
    if (start > end)
        return (-1);
    return (start);
}

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int i = 0;
    while (i < matrixSize)
    {
        if (search(matrix[i], matrixColSize[0], target) != -1)
        {
            return (true);
        }
            
        i++;
    }
    return (false);
}