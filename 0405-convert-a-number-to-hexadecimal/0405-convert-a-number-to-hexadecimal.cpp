class Solution {
public:
    string toHex(int n) {
        string result;
        char a[] = "0123456789abcdef";
        unsigned int num = n;
        do
        {
            result += a[num % 16];
            num >>= 4;
        } while (num);
        return {result.rbegin(), result.rend()};
    }
};