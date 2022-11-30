class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int medianValue = 0, sum = 0;
        nth_element(nums.begin(), nums.begin() + (nums.size() / 2), nums.end());
        medianValue = nums[nums.size() / 2];
        for (auto i : nums)
            sum += (abs(medianValue - i));
        return (sum);
    }
};