class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else
            {
                if (s[i] == ')')
                {
                    if (st.size() > 0 && st.top() == '(')
                        st.pop();
                    else
                        return (false);
                }
                else if (st.size() > 0 && s[i] == '}')
                {
                    if (st.top() == '{')
                        st.pop();
                    else
                        return (false);
                }
                else
                {
                    if (st.size() > 0 && st.top() == '[')
                        st.pop();
                    else
                        return (false);
                }
            }
        }
        return (st.size() == 0);
    }
};