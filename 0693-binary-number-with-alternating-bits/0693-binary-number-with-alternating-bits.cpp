class Solution {
public:
    bool hasAlternatingBits(int n) {
        int x = n & 1;
        while (n)
        {
            if ((n & 1) != x)
            {
                return (false);
            }
            x = !x;
            n >>= 1;
        }
        return (true);
    }
};