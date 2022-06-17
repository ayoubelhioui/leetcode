

int minimumTotal(int** triangle, int triangleSize, int* triangleColSize){
    
    int i = 0, j = 1;
    triangleSize--;
    while (triangleSize--)
    {
        i = -1;
        while (++i < triangleColSize[triangleSize])
            if (triangle[triangleSize][i] + triangle[triangleSize + 1][i] < triangle[triangleSize][i] + triangle[triangleSize + 1][i + 1])
                triangle[triangleSize][i]+=triangle[triangleSize + 1][i];
            else
                triangle[triangleSize][i]+=triangle[triangleSize + 1][i + 1];
    }
    return (triangle[0][0]);
}