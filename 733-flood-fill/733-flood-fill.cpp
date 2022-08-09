class Solution {
public:
    void recursive_method(vector<vector<int>> &image, int sr, int sc, int main_color, int color, int rowSize, int colSize)
    {
        if (sr >= rowSize || sr < 0 || sc >= colSize || sc < 0)
            return ;
        if (image[sr][sc] == main_color)
        {
            image[sr][sc] = color;
            recursive_method(image, sr, sc - 1, main_color, color, rowSize, colSize);
            recursive_method(image, sr, sc + 1, main_color, color, rowSize, colSize);
            recursive_method(image, sr - 1, sc, main_color, color, rowSize, colSize);
            recursive_method(image, sr + 1, sc, main_color, color, rowSize, colSize);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int rowSize = image.size();
        int columnSize = image[0].size();
        if (image[sr][sc] == color)
            return (image);
        recursive_method(image, sr, sc, image[sr][sc], color, rowSize, columnSize);
        return (image);
    }
};