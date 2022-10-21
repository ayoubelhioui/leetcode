class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int>m;
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            auto it = m.find(nums[i]);
            if (it != m.end())
            {
                if (abs(i - it->second) <= k)
                {
                    printf("i is : %d, and j is : %d\n", i, it->second);
                    return (true);
                }
                    
            }
            m[nums[i]] = i;
        }
        return (false);
    }
};