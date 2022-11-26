class Solution {
public:
    void hexIt(unsigned int num, string &a, string &result)
    {
        if (num == 0)
            return ;
            
        hexIt(num / 16, a, result);
        result += a[num % 16];
    }
    string toHex(int num) {
        string result;
        string a = "0123456789abcdef";
        hexIt(num, a, result);
        return (result != "" ? result : "0");
    }
};