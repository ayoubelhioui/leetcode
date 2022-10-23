class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result(2);
        map<int, int> m;
        for (auto it : nums)
            m[it]++;
        for (int i = 1; i <= nums.size(); i++)
        {
            if (m[i] == 0)
                result[1] = i;
            else if (m[i] == 2)
                result[0] = i;
        }
        
        return (result);
    }
};