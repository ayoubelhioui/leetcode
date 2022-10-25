class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "";
        string s2 = "";
        int length1 = word1.size();
        int length2 = word2.size();
        for (int i = 0; i < length1; i++)
        {
            int j = 0;
            while (word1[i][j])
                s1 += word1[i][j++];
        }
        for (int i = 0; i < length2; i++)
        {
            int j = 0;
            while (word2[i][j])
                s2 += word2[i][j++];
        }
        return (s1 == s2);
    }
};