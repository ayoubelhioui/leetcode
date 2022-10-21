class Solution {
public:
    bool DFS(vector<vector<int>> &graph, vector<int> &visitedNodes, int currentIndex, int destination)
    {
        if (currentIndex == destination)
            return (true);
        visitedNodes[currentIndex] = 1;
        for (int i = 0; i < graph[currentIndex].size(); i++)
        {
            if (visitedNodes[graph[currentIndex][i]] == 0)
            {
                if (DFS(graph, visitedNodes, graph[currentIndex][i], destination))
                   return (true);
            }
        }
        return (false);
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    vector<vector<int>> graph(n);
    vector<int> visitedNodes(n, 0);
        for(int i=0; i<edges.size(); i++) {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        return (DFS(graph, visitedNodes, source, destination));
}

};