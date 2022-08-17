class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size(),  i = 0, j = size - 1;
        vector<int> vec;
        while (i <= j)
        {
            if (nums[i] * nums[i] > nums[j] * nums[j])
            {
                vec.insert(vec.begin(), nums[i] * nums[i]);
                // j--;
                i++;
            }
            else
            {
                vec.insert(vec.begin(), nums[j] * nums[j]);
                // i++;
                j--;
            }
        }
        return (vec);
    }
};