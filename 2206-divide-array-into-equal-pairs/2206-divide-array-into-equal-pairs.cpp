class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501] = {0};
        for (auto i : nums)
            a[i]++;
        for (auto i : a)
            if (i & 1)
                return (false);
        return (true);
    }
};