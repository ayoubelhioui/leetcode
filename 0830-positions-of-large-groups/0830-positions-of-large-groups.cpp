class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
	vector<vector<int>> returnedArray;
	int right = 1, left = 0, count = 0, length = s.length();
	for(int i = 0; i < length; i++)
	{
		if (i < length - 1 && s[i] == s[i + 1])
		{
			int saver = i;
			while (s[i] == s[i + 1])
				i++;
			if (i - saver >= 2)
			{
				vector<int> v(2);
				v[0] = saver;
				v[1] = i;
				returnedArray.push_back(v);
			}
			if (!s[i])
				break ;
		}
	}
	return (returnedArray);
}
};