class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int counter = 1;
        string word = "";
        stringstream s(sentence);
        while (s >> word)
        {
            if (word.find(searchWord) == 0)
                return (counter);
            counter++;
        }
        return (-1);
    }
};