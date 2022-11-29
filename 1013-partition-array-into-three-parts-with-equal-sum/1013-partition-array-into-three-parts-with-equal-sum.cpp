class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum, newSum = 0, count = 0;
        sum = accumulate(begin(arr), end(arr), 0);
        if (sum % 3 != 0)
            return (false);
        int value = sum / 3;
        for (auto i : arr)
        {
            newSum += i;
            if (newSum == value)
            {
                count++;
                newSum = 0;
            }
        }
        return (count < 3 ? false : true);
    }
};