// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
        
int firstBadVersion(int n) {
    int med = 0, start = 1, end = n;

    while (start <= end)
    {
        med = start + (end - start) / 2;
        if (isBadVersion(med) == true)
        {
            if (isBadVersion(med - 1) == false)
                return (med);
            end = med - 1;
        }
        else if (isBadVersion(med) == false)
        {
            if (isBadVersion(med + 1) == true)
                return (med + 1);
            start = med + 1;
        }
    }
    return (med);
}