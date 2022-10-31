class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> result(2);
        int lines = 0, sLength = s.length(), lastLineWidth = 0, capacity = 0;
        for (int i = 0; i < sLength; i++)
        {
            capacity += widths[s[i] - 'a'];
            if (capacity > 100)
            {
                capacity = widths[s[i] - 'a'];
                lines++;
            }
            else if (capacity == 100 && i < sLength - 1)
            {
                capacity = 0;
                lines++;
            }
        }
        result[0] = lines + 1;
        result[1] = capacity;
        return (result);
    }
};