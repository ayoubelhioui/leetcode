class Solution {
public:
    int gettingLastIndex(vector<int> &nums, int start, int topElement)
    {
        int end = 0;
        for (int i = start; i < nums.size(); i++)
            if (nums[i] == topElement)
                end = i;
        return (end);
    }

    int gettingFirstIndex(vector<int> &nums, int start, int topElement)
    {
        for (int i = start; i < nums.size(); i++)
            if (nums[i] == topElement)
                return (i);
        return (-1);
    }

    int findShortestSubArray(vector<int>& nums) {
        int start = 0, end = 0, returnedValue = 2147483647;
        map<int, int> m;
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        for (auto it: m)
            pq.push(make_pair(it.second, it.first));
        pair<int, int> topElement = pq.top();
        if (topElement.first == 1)
            return (1);
        while (1)
        {
            topElement = pq.top();
            end = 0, start = 0;
            start = gettingFirstIndex(nums, start, topElement.second);
            end = gettingLastIndex(nums, start + 1, topElement.second);
            returnedValue = min(end - start + 1, returnedValue);
            pq.pop();
            if (pq.size() == 0 || pq.top().first != topElement.first)
                break ;
        }
        return (returnedValue);
    }
};