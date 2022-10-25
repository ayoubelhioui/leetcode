class Solution {
public:
 int islandPerimeter(vector<vector<int>>& grid) {
	// counter = 0;
	// DFS(grid, 0, 0);
	// return (counter);
	int gridSize = grid.size(), counter = 0;
	for (int i = 0; i < gridSize; i++)
	{
		int size = grid[i].size();
		
		for (int j = 0; j < size; j++)
		{
            int value = 4;
			if (grid[i][j] == 1)
			{
				if (i < gridSize - 1 && grid[i + 1][j] == 1)
					value--;
				if (i > 0 && grid[i - 1][j] == 1)
					value--;
				if (j < size - 1 && grid[i][j + 1] == 1)
					value--;
				if (j > 0 && grid[i][j - 1] == 1)
					value--;
                counter += value;
			}
			
		}
	}
	return (counter);
}
};