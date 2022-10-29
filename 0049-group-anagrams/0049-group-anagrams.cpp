class Solution {
public:
      vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int strsSize = strs.size();
        vector<vector<string>> vec;
        int m[strsSize][26];
        int vis[strsSize];
        memset(vis, 0, sizeof(int) * strsSize);
        for (int i = 0; i < strsSize; i++)
        {
            memset(m[i], 0, sizeof(int) * 26);
            for (int j = 0; j < strs[i].length(); j++)
                m[i][strs[i][j] - 'a']++;
        }
        for (int i = 0; i < strs.size(); i++)
        {
            if (vis[i] == 1)
                continue;
            vector<string> v;
            v.push_back(strs[i]);
            for (int j = i + 1; j < strs.size(); j++)
            {
                if ((strs[i].length() == strs[j].length()))
                {
                    if (!memcmp(m[i], m[j], sizeof(int) * 26))
                    {
                        v.push_back(strs[j]);
                        vis[j] = 1;
                    }
                }
            }
            vec.push_back(v);
        }
        return (vec);
    }
};