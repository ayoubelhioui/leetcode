class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> se;
        for (auto i : s)
            if (!se.insert(i).second)
                return (i);
        return (' ');
    }
};