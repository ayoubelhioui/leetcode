class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++)
        {
            int left = 0, right = image.size() - 1, buffer = 0;
            while (left <= right)
            {
                buffer = !image[i][left];
                image[i][left++] = !image[i][right];
                image[i][right--] = buffer;
            }
        }
        return (image);
    }
};