

bool isSubsequence(char * s, char * t){
    int i = 0, j = 0, counter = 0, s_length = strlen(s);
    
    while (j < strlen(s) && t[i])
    {
        if (s[j] == t[i])
        {
            counter++;
            j++;
        }
           
        i++;
    }
    if ((s[j] == '\0' || t[i] == '\0') && counter == s_length)
        return (true);
    return (false);
        
}