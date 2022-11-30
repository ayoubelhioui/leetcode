class Solution {
public:
    string removeKdigits(string num, int k) {
        string result;
        for (int i = 0; i < num.length(); i++)
        {
            while (result.length() && result.back() > num[i] && k > 0)
            {
                result.pop_back();
                k--;
            }
            if (result.length() || num[i] != '0')
                result += num[i];
        }
        while (k-- && result.length() )
            result.pop_back();
        return (result = (result == "" ? "0" : result));
    }
};