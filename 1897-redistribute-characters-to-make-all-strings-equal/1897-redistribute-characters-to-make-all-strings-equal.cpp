class Solution {
public:
    void    countingCharacters(vector<string> &words, int *a, int size)
    {
         for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < words[i].length(); j++)
                a[words[i][j] - 97]++;
        }
    }
    
    bool makeEqual(vector<string>& words) {
        int a[26] = {0};
        int wordsSize = words.size();
        countingCharacters(words, a, wordsSize);
        for (int i = 0; i < 26; i++)
        {
            if (a[i] % wordsSize != 0)
                return (false);
        }
        return (true);
    }
    
};