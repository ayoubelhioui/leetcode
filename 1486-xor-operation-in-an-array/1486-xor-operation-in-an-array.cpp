class Solution {
public:
    int xorOperation(int n, int start) {
        int result = 0, i = start;
        vector<int> vec;
        while (n > 0)
        {
            vec.push_back(i);
            i+=2;
            n--;
        }
        for (auto i : vec)
            result ^= i;
        return (result);
    }
};