class Solution:
    def recursive(self, grid, i, j):
        if (i < 0 or j < 0 or i > len(grid) - 1 or j > len(grid[i]) - 1 or grid[i][j] == 0):
            return 1;
        if (grid[i][j] == -1):
            return (0);
        grid[i][j] = -1;
        return self.recursive(grid, i + 1, j) + self.recursive(grid, i - 1, j) + self.recursive(grid, i, j + 1) + self.recursive(grid, i, j - 1);
    def islandPerimeter(self, grid):
        count = 0;
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if (grid[i][j] == 1):
                    count = self.recursive(grid, i, j);
        return count;