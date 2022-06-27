class Solution {
public:
    bool is_it_palindrome(string s, int start, int end)
    {
         int i = start, j = end;
        while (i < j)
        {   
            if (s[i] != s[j])
                return (false);
            i++;
            j--;   
        }
        return (true);
    }
    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j)
        {
            if (s[i] != s[j])
                return (is_it_palindrome(s, i, j - 1) || is_it_palindrome(s, i + 1, j));
            i++;
            j--;
        }
        return (true);
    }
};