class Solution {
public:
    string oddString(vector<string>& words) {
        int wordsSize = words.size(), stringLength = words[0].length(), j = 0;
        vector<int> vec(stringLength - 1);
        map<vector<int>, int> m;
        map<vector<int>, int> m1;
        for (int i = 0; i < wordsSize; i++)
        {
            j = 0;
            for (j = 0; j < stringLength - 1; j++)
                vec[j] = words[i][j + 1] - words[i][j];
            m1[vec] = i;
            m[vec]++;
        }
        for (auto i : m)
            if (i.second == 1)
                return (words[m1[i.first]]);
        return (words[0]);
    }
};