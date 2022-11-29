class Solution {
public:
    int minimumMoves(string s) {
        int sLength = s.length(), count = 0, indexSavior = 0, i = 0;
        while (i < sLength)
        {
            indexSavior = 0;
            if (s[i] == 'X')
            {
                while (s[i] && indexSavior++ < 3)
                i++;
            }
            else
                i++;
            if (indexSavior != 0)
                count++;
            if (!s[i])
                return (count);
        }
        return (count);
    }
};