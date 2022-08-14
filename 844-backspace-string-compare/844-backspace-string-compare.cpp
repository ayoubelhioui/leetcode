class Solution {
public:
    void feelStack(stack<char> &s, string data, int string_length)
    {
        for (int i = 0; i < string_length; i++)
        {
            if (data[i] == '#')
            {
                if (s.size() > 0)
                    s.pop();
            }
            else
                s.push(data[i]);
        }
    }
    
    bool result(stack<char> &t_st, stack<char> &s_st)
    {
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
        }
        for(int i = 0; i < x; i++)
        {
            char c = t_st.top();
            if (c != '#')
            {
                t_st.pop();
                b.push_back(c);
            }
        }
        if (a == b)
            return (true);
        return (false);
    }
    bool backspaceCompare(string s, string t) {
        stack<char> s_st;
        stack<char> t_st;
        int s_length = s.length(), t_length = t.length();
        feelStack(s_st, s, s_length);
        feelStack(t_st, t, t_length);
        string a, b;
        int k = s_st.size(), x = t_st.size();
        // for(int i = 0; i < k; i++)
        // {
        //     char c = s_st.top();
        //     if (c != '#')
        //     {
        //         s_st.pop();
        //         a.push_back(c);
        //     }
        // }
        // for(int i = 0; i < x; i++)
        // {
        //     char c = t_st.top();
        //     if (c != '#')
        //     {
        //         t_st.pop();
        //         b.push_back(c);
        //     }
        // }
        // if (a == b)
        //     return (true);
        if (result(s_st, t_st))
            return (true);
        return (false);
    }
};