class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pr;
        int size = stones.size();
        for (int i = 0; i < size; i++)
            pr.push(stones[i]);
        int a, b;
        while (pr.size() > 1)
        {
            a = pr.top();
            pr.pop();
            b = pr.top();
            pr.pop();
            if (a - b > 0)
                pr.push((a - b));
        }
        if(pr.size() == 0) 
            return 0;
        return (pr.top());
    }
};