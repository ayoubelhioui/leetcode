class Solution {
public:
    string makeFancyString(string s) {
        int i = 0;
        string s1;
        
        while (i < s.length())
        {
            if (s[i] == s[i + 1] && s[i + 1] == s[i + 2])
            {
                i++;
                continue;
            }
            s1+=s[i];
            i++;
        }
        return (s1);
    }
};