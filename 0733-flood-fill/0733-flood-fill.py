class Solution(object):
    def colorIt(self, image, sr, sc, mainColor, color):
        if (sr >= len(image) or sr < 0 or sc >= len(image[0]) or sc < 0 or image[sr][sc] != mainColor or image[sr][sc] == color):
            return ;
        image[sr][sc] = color;
        self.colorIt(image, sr + 1, sc, mainColor, color);
        self.colorIt(image, sr - 1, sc, mainColor, color);
        self.colorIt(image, sr, sc + 1, mainColor, color);
        self.colorIt(image, sr, sc - 1, mainColor, color);
    def floodFill(self, image, sr, sc, color):
        self.colorIt(image, sr, sc, image[sr][sc], color);
        return (image);