class Solution {
public:
     string largestOddNumber(string num) 
    {
        int last = num.length() - 1;
        while (last >= 0)
        {
            int value = num[last] - '0';
            if (value % 2 != 0)
                return (num.substr(0, last + 1));
            last--;
        }
        return ("");
    }
};