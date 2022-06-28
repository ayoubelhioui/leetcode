

bool isAnagram(char * s, char * t){
    int d[26] = {0};
    int i = 0;
    while (s[i] && t[i])
    { 
        d[s[i] - 'a']++;
        d[t[i++] - 'a']--;
    }
    if (s[i] || t[i])
        return (false);
    i = 0;
    while (i < 26)
    {
        if (d[i++] != 0)
            return (false);
    }
    return (true);
}