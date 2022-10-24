class Solution {
public:
     int countGoodSubstrings(string s) {
        int left = 0, right = 0, length = s.length(), result = 0, flag = 0;
        set<char> se;
        while (right < length)
        {
			flag = 0;
			auto it = se.insert(s[right]);
			if (!it.second)
			{
				if (s[left] != s[right])
                {
                    se.erase(s[left]);
                    left++;
                }
				left++;
			}
            else if (right - left == 2)
            {
                result++;
				se.erase(s[left]);
                left++;
            }
            right++;
        }
        return (result);
    }
};