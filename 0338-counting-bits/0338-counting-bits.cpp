class Solution {
public:
    int getBitsCout(int value){
        int count = 0;
        while (value)
        {
            count += value & 1;
            value >>= 1;
        }
        return (count);
    }
    vector<int> countBits(int n) {
        vector<int> result(n + 1);
        for (int i = 0; i <= n; i++)
            result[i] += getBitsCout(i);
        return (result);
    }
};