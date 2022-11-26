class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int occurancyCount[501] = {0};
        for (auto i : nums)
            occurancyCount[i]++;
        return (all_of(begin(occurancyCount), end(occurancyCount), [](int a){
            return ((a & 1) == 0);
        }));
    }
};