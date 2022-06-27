

bool isAnagram(char * s, char * t){
    int d[26] = {0};
    int i = 0;
    while (s[i])
        d[s[i++] - 'a']++;
    i = 0;
    while (t[i])
        d[t[i++] - 'a']--;
    i = 0;
    while (i < 26)
    {
        if (d[i++] != 0)
            return (false);
    }
    return (true);
}