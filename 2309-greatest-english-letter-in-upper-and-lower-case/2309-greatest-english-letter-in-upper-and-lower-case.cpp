class Solution {
public:
    string greatestLetter(string s) {
        string returnedString = "";
        int upper[26] = {0}, lower[26] = {0}, m = 0;
        for (auto i : s)
            if (isupper(i))
                upper[i - 'A'] = 1;
            else
                lower[i - 'a'] = 1;
        for (int i = 0; i < 26; i++)
            if (upper[i] == 1 && lower[i] == 1)
                m = max(m, i + 'A');
        if (m != 0)
            return (returnedString += m);
    return ("");
}
};