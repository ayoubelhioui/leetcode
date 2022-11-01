class Solution {
public:
    int mySqrt(int x) {
        if (x == 1)
            return (1);
        int start = 0, end = x / 2;
        long long med = 0;
        while (start < end)
        {
            med = (start + end) / 2;
            if ((med * med) < x)
            {
                if ((med + 1) * (med + 1) > x)
                    return (med);
                start = med + 1;
            }
            else if ((med * med) > x)
                end = med - 1;
            else
                return (med);
        }
        return (start);
    }
};