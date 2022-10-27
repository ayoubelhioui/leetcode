class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string> se;
        int wordLength = word.length(), counter = 0;
        for (int i = 0; i < wordLength; i++)
            if (!isdigit(word[i]))
                word[i] = ' ';
        stringstream s(word);
        string readed;
        while (s >> readed)
        {
            int i = 0;
            while (readed[i] && readed[i] == '0')
                i++;
            readed.erase(0, i);
            se.insert(readed);
        }
        return (se.size());
    }
};