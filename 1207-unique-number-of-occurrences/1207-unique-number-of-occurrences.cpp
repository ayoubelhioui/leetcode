class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m;
        set<int> se;
        for (auto i : arr)
            m[i]++;
        for (auto i : m)
            if (!se.insert(i.second).second)
                return (false);
        return (true);
    }
};