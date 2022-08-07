// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long start = 0, end = n, med;
        while (start < end)
        {
            med = (start + end) / 2;
            if (isBadVersion(med) == true)
            {
                if (isBadVersion(med - 1) == false)
                    return (med);
                end = med - 1;
            }
            else if(isBadVersion(med) == false)
            {
                if (isBadVersion(med + 1) == true)
                    return (med + 1);
                start = med + 1;
            }
        }
     return (med);
    }
};