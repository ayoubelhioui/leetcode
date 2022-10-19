class Solution {
public:
    void    getWord(string &nums, int &endIndex)
    {
        while (nums[endIndex] && nums[endIndex] != ' ')
            endIndex++;
    }
    
    // void    
    string toGoatLatin(string sentence) {
        int counter = 1, sentenceLength = sentence.length() - 1,  i = 0;
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        string newSentence;
        while (sentence[i])
        {
            if (sentence[i] == ' ' || i == 0)
            {
                int endIndex = 0;
                if (i > 0)
                    i++;
                // if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' ||
                // sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'A' ||
                // sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U')
                if(vowels.count(sentence[i]))
                {
                    endIndex = i;
                    getWord(sentence, endIndex);
                    newSentence += sentence.substr(i, endIndex - i);
                    newSentence += "ma";
                    for (int x = 0; x < counter; x++)
                        newSentence += "a";
                }
                else
                {
                    char saver = sentence[i];
                    endIndex = i;
                    getWord(sentence, endIndex);
                    newSentence += sentence.substr(i + 1, endIndex - i - 1);
                    newSentence += saver;
                    newSentence += "ma";
                    for (int x = 0; x < counter; x++)
                        newSentence += "a";
                }
                counter++;
                newSentence += " ";
                if (!sentence[endIndex])
                    break ;
                i = endIndex - 1;
            }
            i++;
        }
        newSentence.erase(newSentence.size() - 1, 1);
        return (newSentence);
    }
};