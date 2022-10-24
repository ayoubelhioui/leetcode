class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map< pair <int, int>, int> m;
        int counter = 0;
        for (int i = 0; i < dominoes.size(); i++)
        {
            if (dominoes[i][0] > dominoes[i][1])
                swap(dominoes[i][0], dominoes[i][1]);
            counter += m[make_pair(dominoes[i][0], dominoes[i][1])];
            m[make_pair(dominoes[i][0], dominoes[i][1])]++;
        }
        return (counter);
    } 
};