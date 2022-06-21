class Solution {
public:
    int decrease(vector <int> &nums, int length)
    {
        int i = 0;
        while (i < length)
        {
            cout << "the numbers are :" << nums[i] << " and " << nums[i + 1] << endl; 
            if (nums[i] > nums[i + 1])
            {
                cout << "HERE" << endl;
                return (false);
            }
                
            i++;
        }
        return (true);
    }
    
    int increase(vector <int> &nums, int length)
    {
        int i = 0;
        while (i < length)
        {
            if (nums[i] < nums[i + 1])
            {
                cout << "HERE" << endl;
                return (false);
            }
            i++;
        }
        return (true);
    }
    
    bool isMonotonic(vector<int>& nums) {
        int i = 0, length = nums.size() - 1;
        if (decrease(nums, length) == false && increase(nums, length) == false)
            return (false);
        return (true);
    }
};