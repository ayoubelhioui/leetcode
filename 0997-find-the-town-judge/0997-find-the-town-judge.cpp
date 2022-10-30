class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int indegree[1001] = {}, outdegree[1001] = {}, trustSize = trust.size(),  i = 0;
            for (i = 0; i < trustSize; i++)
            {
                outdegree[trust[i][0]]++;
                indegree[trust[i][1]]++;
            }
            for (int i = 1; i <= n; i++)
                if (indegree[i] == (n - 1) and outdegree[i] == 0)
                    return (i);
        return (-1);
    }
};