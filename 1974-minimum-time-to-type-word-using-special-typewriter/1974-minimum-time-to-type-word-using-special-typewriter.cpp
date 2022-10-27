class Solution {
public:
    int minTimeToType(string word) {
        int wordLength = word.length(), value = 0;
        int total = (word[0] - 'a') <= 13 ? abs(word[0] - 'a') : 26 - abs(word[0] - 'a');
        total++;
        for (int i = 0; i < wordLength - 1; i++)
        {
            value = abs(word[i + 1] - word[i]);
            if (value <= 13)
                total += value;
            else
                total += 26 - value;
            total++;
        }
        return (total);
    }
};