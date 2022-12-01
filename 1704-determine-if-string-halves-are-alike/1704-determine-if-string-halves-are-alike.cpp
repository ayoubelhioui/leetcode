class Solution {
public:
    bool halvesAreAlike(string s) {
        int count = 0, i = 0;
        for (i = 0; i < s.length() / 2; i++)
            if (s[i] == 'e' || s[i] == 'E' || s[i] == 'a' || s[i] == 'A' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
                count++;
        while (i < s.length())
        {
            if (s[i] == 'e' || s[i] == 'E' || s[i] == 'a' || s[i] == 'A' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
                count--;
            i++;
        }
        return (count == 0);
    }
};