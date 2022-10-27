class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int sLength = s.length();
        string newString(sLength, ' ');
        for (int i = 0; i < sLength; i++)
            newString[indices[i]] = s[i];
        return (newString);
    }
};