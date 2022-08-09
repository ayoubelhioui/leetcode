
class Solution {
public:
    void recursive_method(vector<vector<char>> &grid, int rowSize, int colSize, int i, int j, int islands_counter)
    {
        if (j < 0 || j >= colSize || i < 0 || i >= rowSize)
            return ;
        if (grid[i][j] == '1')
        {
            grid[i][j] = '0';
            recursive_method(grid, rowSize, colSize, i - 1, j, islands_counter);
            recursive_method(grid, rowSize, colSize, i + 1, j, islands_counter);
            recursive_method(grid, rowSize, colSize, i, j - 1, islands_counter);
            recursive_method(grid, rowSize, colSize, i, j + 1, islands_counter);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int rowSize = grid.size(), colSize = grid[0].size(), i = 0, j = 0, islands_counter = 0;
        if (rowSize == 0)
            return (0);
        islands_counter = 0;
        while (i < rowSize)
        {
            j = 0;
            while (j < colSize)
            {
                if (grid[i][j] == '1')
                {
                    recursive_method(grid, rowSize, colSize, i, j, islands_counter);            
                    islands_counter++;
                }
                j++;
            }
            i++;
        }
        return (islands_counter);
    }
};