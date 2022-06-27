

bool isAnagram(char * s, char * t){
    int d[26] = {0};
    int i = 0;
    while (s[i])
    {
        d[s[i] - 'a']++;
        i++;
    }
    i = 0;
    while (t[i])
    {
        d[t[i] - 'a']--;
        i++;
    }
    i = 0;
    while (i < 26)
    {
        if (d[i] != 0)
        {
             printf("the char is : %c\n", i + 'a');
            return (false);
        }
        // printf("the char is : %c and the value is : %d\n", i + 'a, d[i]);
        i++;
    }
    return (true);
}