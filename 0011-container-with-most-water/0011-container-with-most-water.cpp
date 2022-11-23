class Solution {
public:
        int maxArea(vector<int>& height) {
            int heightSize = height.size(), right = heightSize - 1, left = 0, value = 0, maxValue = 0;
            while (left < right)
            {
                maxValue = max(maxValue, min(height[left], height[right]) * (right - left));
                if (height[left] < height[right])
                    left++;
                else
                    right--;
            }
        return (maxValue);
    }
};