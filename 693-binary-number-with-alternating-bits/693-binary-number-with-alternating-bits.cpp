class Solution {
public:
    bool hasAlternatingBits(int n) {
        int l = n % 2;
        n >>= 1;
        while (n > 0)
        {
            int current = n % 2;
            if (l == current)
                return (false);
            l = current;
            n >>= 1;
        }
        return (true);
    }
};