class Solution {
public:
    int maxPower(string s) {
        int _max = 0, savior = 0, i = 0;
        while (s[i]) {
            savior = i;
            while (i < s.length() - 1 and s[i] == s[i + 1])
                i++;
            _max = max(_max, i - savior + 1);
            i++;
        }
        return (_max);
    }
};