class Solution {
public:
    bool isPowerOfTwo(int n) {
        long int m = n;
        return !!m * !(m & (m - 1));
    }
};