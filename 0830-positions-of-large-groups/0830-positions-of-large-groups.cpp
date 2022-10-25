class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
	vector<vector<int>> returnedArray;
	int length = s.length(), saver = 0;
	for(int i = 0; i < length; i++)
	{
        saver = i;
        while (s[i] == s[i + 1])
            i++;
        if (i - saver >= 2)
            returnedArray.push_back({saver, i});
	}
	return (returnedArray);
}
};