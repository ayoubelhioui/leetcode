class Solution {
public:
    string frequencySort(string s) {
        int frequency[127] = {0}, index = 0;
        priority_queue<pair<int, char>> pq;
        for (auto i : s)
            frequency[i]++;
        for (int i = 0; i < 127; i++)
            if (frequency[i] != 0)
                pq.push({frequency[i], i});
        while (pq.size() > 0)
        {
            pair<int, char> p = pq.top();
            while (p.first-- > 0)
                s[index++] = p.second;
            pq.pop();
        }
        return (s);
    }
};