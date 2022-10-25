class Solution {
public:
    int test(vector<int> &vec, int n)
    {
        if (n == 0)
            return (0);
        if (n == 1 || n == 2)
            return (1);
        if (vec[n] != -1)
            return vec[n];
        vec[n] = test(vec, n - 3) + test(vec, n - 2) + test(vec, n - 1);
        return (vec[n]);
    }
    int tribonacci(int n) {
        vector<int> vec(38, -1);
        return (test(vec, n));
    }
};