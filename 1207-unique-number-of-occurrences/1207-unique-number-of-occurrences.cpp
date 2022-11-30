class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m;
        set<int> se;
        for (auto i : arr)
            m[i]++;
        for (auto i : m)
        {
            auto it = se.insert(i.second);
            if (!it.second)
                return (false);
        }
        return (true);
    }
};