class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int med = nums.size() / 2, sum = 0;
        for (auto i : nums)
            sum += (abs(nums[med] - i));
        return (sum);
    }
};