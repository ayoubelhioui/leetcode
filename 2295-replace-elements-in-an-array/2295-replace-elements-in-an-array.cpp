class Solution {
public:
     void   binarySearch(vector<int>& nums, int target, int value) {
    }
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]] = i;
        for (int i = 0; i < operations.size(); i++)
        {
            nums[m[operations[i][0]]] = operations[i][1];
            m[operations[i][1]] = m[operations[i][0]];
        }
        return (nums);
    }
};