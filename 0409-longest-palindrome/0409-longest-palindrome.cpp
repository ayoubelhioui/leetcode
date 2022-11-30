class Solution {
public:
    int longestPalindrome(string s) {
        int a[127] = {0}, res = 0;
        for (auto i : s)
            a[i]++;
        for (auto i : a)
        {
            res += (i / 2) * 2;
            res += (i % 2 && !(res & 1));
        }
        return (res);
    }
};