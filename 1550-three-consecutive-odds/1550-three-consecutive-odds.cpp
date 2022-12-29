class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr, int saver = 0) {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] & 1)
            {
                saver = i;
                while (i < arr.size() && arr[i] & 1)
                    i++;
                if (i - saver >= 3)
                    return (true);
                saver = 0;
            }
        }
        return (false);
    }
};