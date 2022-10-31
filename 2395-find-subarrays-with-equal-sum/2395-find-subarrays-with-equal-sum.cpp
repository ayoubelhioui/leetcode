class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int numsSize = nums.size(), sum = 0;
        map<int, int> m;
        for (int i = 0; i < numsSize - 1; i++)
        {
            sum = nums[i] + nums[i + 1];
            map<int, int>::iterator it = m.find(sum);
            if (it != m.end())
                return (true);
            m[sum]++;
        }
        return (false);
    }
};