class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s_st;
        stack<char> t_st;
        int s_length = s.length(), t_length = t.length();
        for (int i = 0; i < s_length; i++)
        {
            if (s[i] == '#')
            {
                if (s_st.size() > 0)
                    s_st.pop();
            }
            else
                s_st.push(s[i]);
        }
        for (int i = 0; i < t_length; i++)
        {
            if (t[i] == '#')
            {
                if (t_st.size() > 0)
                    t_st.pop();
            }
            else
                t_st.push(t[i]);
        }
        string a, b;
        int k = s_st.size(), x = t_st.size();
        for(int i = 0; i < k; i++)
        {
            char c = s_st.top();
            if (c != '#')
            {
                s_st.pop();
                a.push_back(c);
            }
                // cout << "element of s : " << s_st.top() << endl;
                // s_st.pop();
        }
        for(int i = 0; i < x; i++)
        {
            char c = t_st.top();
            if (c != '#')
            {
                t_st.pop();
                b.push_back(c);
            }
            // cout << "element of t : " << t_st.top() << endl;
            //     t_st.pop();
        }
        if (a == b)
            return (true);
        return (false);
    }
};