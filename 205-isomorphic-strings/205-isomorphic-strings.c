

bool isIsomorphic(char * s, char * t){
    int a[127] = {0};
    int b[127] = {0};
    int i = 0;
    while (s[i])
    {
        if (a[s[i]] != 0)
        {
            if (a[s[i]] != t[i])
                return (false);
        }
        else if (b[t[i]] != s[i] && b[t[i]] != 0)
            return (false);
        a[s[i]] = t[i];
        b[t[i]] = s[i];
        i++;
    }
    return (true);
}