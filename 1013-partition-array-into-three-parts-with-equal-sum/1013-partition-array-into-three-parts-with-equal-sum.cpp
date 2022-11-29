class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0, newSum = 0, count = 0;
        for (auto i : arr)
            sum += i;
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