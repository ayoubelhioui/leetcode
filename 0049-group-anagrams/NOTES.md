["eat","tea","tan","ate","nat","bat"]
[""]
["a"]
["","",""]
​
​
​
​
class Solution {
public:
vector<vector<string>> groupAnagrams(vector<string>& strs) {
int strsSize = strs.size();
vector<vector<string>> vec;
map<string, map<char, int>> m;
vector<pair<string, int>> newString(strsSize);
for (int i = 0; i < strsSize; i++)
{
newString[i] = {strs[i], 0};
for (int j = 0; j < newString[i].first.length(); j++)
m[newString[i].first][newString[i].first[j]]++;
}
// for (auto it : m)
// {
//     map<char, int> &internal_map = it.second;
//     for (auto j : internal_map)
//         printf("char is : %c, and counter is : %d\n", j.first, j.second);