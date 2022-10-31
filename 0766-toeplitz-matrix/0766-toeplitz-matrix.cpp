class Solution {
public:
    bool DFS(vector<vector<int>> &matrix, int i, int j, int matrixSize, int value)
    {
        if (i == matrixSize || j == matrix[i].size() || matrix[i][j] == -1)
            return (true);
        if (matrix[i][j] != value)
            return (false);
        if (!DFS(matrix, i + 1, j + 1, matrixSize, matrix[i][j]))
            return (false);
        matrix[i][j] = -1;
        return (true);
    }
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        int matrixSize = matrix.size();
        for (int i = 0; i < matrixSize; i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
                if (!DFS(matrix, i, j, matrix.size(), matrix[i][j]))
                    return (false);
        }
        return (true);
    }
};