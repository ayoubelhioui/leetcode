class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int sentencesSize = sentences.size(), maxResult = 0, oldResult = 0;
        for (auto sentence : sentences)
        {
            stringstream newSentence(sentence);
            string singleWord;
            oldResult = 0;
            while (newSentence >> singleWord)
                oldResult++;
            maxResult = max(maxResult, oldResult);
        }
        return (maxResult);
    }
};