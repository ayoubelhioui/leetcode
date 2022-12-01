class Solution {
public:
    bool halvesAreAlike(string s) {
        int count = 0, i = 0, j = s.length() - 1;
        string vowels = "aeiouAEIOU";
        while (i < j)
            count += (vowels.find(s[i++]) < 10) - (vowels.find(s[j--]) < 10);
        return (count == 0);
    }
};