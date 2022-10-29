class Solution {
public:
      vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int strsSize = strs.size();
        vector<vector<string>> vec;
        //map<int, map<char, int>> m;
        int m[strsSize][26];
        vector<pair<string, int>> newString(strsSize);
        for (int i = 0; i < strsSize; i++)
        {
            memset(m[i], 0, sizeof(int) * 26);
            newString[i] = {strs[i], 0};
            for (int j = 0; j < newString[i].first.length(); j++)
                m[i][newString[i].first[j] - 'a']++;
        }
        for (int i = 0; i < newString.size(); i++)
        {
            if (newString[i].second == 1)
                continue;
            vector<string> v;
            v.push_back(newString[i].first);
            for (int j = i + 1; j < newString.size(); j++)
            {
                if ((newString[i].first.length() == newString[j].first.length()))
                {
                    if (!memcmp(m[i], m[j], sizeof(int) * 26))
                    {
                        v.push_back(newString[j].first);
                        newString[j].second = 1;
                    }
                }
            }
            vec.push_back(v);
        }
        return (vec);
    }
};