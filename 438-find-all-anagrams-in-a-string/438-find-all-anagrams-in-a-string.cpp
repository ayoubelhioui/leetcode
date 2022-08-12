class Solution {
public:
    void init(map<char, int> &pmap, string p, int length)
    {
        for (int i = 0; i < length; i++)
        {
            pmap[p[i]]+=1;
        }
    }
    
    vector<int> findAnagrams(string s, string p) {
        vector<int>ph(26, 0);
        vector<int>w(26, 0);
        vector<int> ret;
        int p_length = p.length(), s_length = s.length(), right = 0, left = 0;
        if (s_length < p_length)
            return ret;
        for (right = 0; right < p_length; right++)
        {
            ph[p[right] - 'a']+=1;
            w[s[right] - 'a']+=1;
        }
        right--;
        while (right < s_length)
        {
            if (ph == w)
                ret.push_back(left);
            right++;
            if (right != s_length)
                w[s[right] - 'a']+=1;
            w[s[left] - 'a']-=1;
            left++;
        }
        return (ret);
    }
};