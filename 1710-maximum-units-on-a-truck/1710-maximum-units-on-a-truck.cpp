class Solution {
public:
    void    fillTheBoxes(int &result, int &truckSize, pair<int, int> &box)
    {
        while (truckSize > 0 && box.second > 0)
        {
            result += box.first;
            truckSize--;
            box.second--;
        }
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int boxTypesSize = boxTypes.size(), result = 0;
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < boxTypesSize; i++)
            pq.push({boxTypes[i][1], boxTypes[i][0]});
        int pqSize = pq.size();
        while (truckSize > 0 && pqSize > 0)
        {
            auto box = pq.top();
            fillTheBoxes(result, truckSize, box);
            pq.pop();
            pqSize--;
        }
        return (result);
    }
};