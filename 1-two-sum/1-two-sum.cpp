class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec;
        map<int, int> m;
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            auto it = m.find(target - nums[i]);
            if (it == m.end())
                m[nums[i]] = i;
            else
            {
                cout << "here" ;
                vec.push_back(i);
                vec.push_back(it->second);
                return (vec);
            }
        }
        return (vec);
    }
};