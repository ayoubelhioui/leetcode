int pathsCounter;
class Solution {
public:
    int recursive_method(int m, int n, int x, int y,  vector<vector<int>> &vec)
    {
        if (x >= m || x < 0 || y >= n || y < 0)
            return 0;
        if (x == m - 1 && y == n - 1)
            return (1);
        if (vec[x][y] != -1)
            return (vec[x][y]);
        vec[x][y] = recursive_method(m, n, x + 1, y, vec) + recursive_method(m, n, x, y + 1, vec);
        return (vec[x][y]);
    }
    
    int uniquePaths(int m, int n) {
        pathsCounter = 0;
         vector<vector<int>> vec(m, vector<int> (n, -1));
        return (recursive_method(m, n, 0, 0, vec));
    }
};