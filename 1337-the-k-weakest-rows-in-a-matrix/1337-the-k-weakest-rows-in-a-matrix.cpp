class Solution {
public:
    int binarySearch(vector<int> &vec, int size)
    {
        int start = 0, end = size - 1, med = 0;
        while (start <= end)
        {
            med = (start + end) / 2;
            if (vec[med] == 0)
                end = med - 1;
            else
                start = med + 1;
        }
        return (start);
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int size = mat.size();
        vector<int> result(size);
        vector<int> returnedArray(k);
        priority_queue<pair<int, int> > pq;
        for (int i = 0; i < size; i++)
        {
            result[i] = binarySearch(mat[i], mat[i].size());
            pq.push(make_pair(result[i], i));
            if (pq.size() > k)
                pq.pop();
        }
        pair<int, int> s;
        while (!pq.empty())
        {
            s = pq.top();
            returnedArray[k - 1] = s.second;
            k--;
            pq.pop();
        }
        return (returnedArray);
    }
};