class Solution {
public:
    bool isPerfectSquare(int num) {
        long start = 0, end = num, med;
        while (start <= end)
        {
            med = (start + end) / 2;
            if ((med * med) > num)
                end = med - 1;
            else if ((med * med) < num)
                start = med + 1;
            else
                return (true);
        }
        return (false);
    }
};