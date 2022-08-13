class Solution {
public:
    void addToTheMap(map<char, int> &s, map<char,int>::iterator &it, char a, int &B)
    {
        if (it == s.end())
            s[a] = 1;
        else
        {
            if (it->second > 0)
            {
                s[a]--;
                B++;
            }
            else
                s[a]++;
        }
    }
    string getHint(string secret, string guess) {
        vector<int> vec(10, 0);
        int A = 0, B = 0, s_length = secret.length(), g_size = guess.length();
        if (secret == guess)
            return (to_string(s_length) + "A" + "0B");
        for (int i = 0; i < s_length; i++)
        {
            if (secret[i] == guess[i])
            {
                A++;
                continue ;
            }
            if (vec[secret[i] - '0']++ < 0) B++;
            if (vec[guess[i] - '0']-- > 0) B++;
        }
        return (to_string(A) + "A" + to_string(B) + "B");
    }
};