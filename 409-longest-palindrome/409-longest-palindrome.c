

int longestPalindrome(char * s){
    int s1[255] = {0};
    int i = 0, sum = 0, test = 0;
    while (s[i])
    {
        s1[s[i]]+=1;
        i++;
    }
    i = 0;
    while (i < 255)
    {
        sum += s1[i] % 2 == 0 ? s1[i] : s1[i] - 1;
        if (s1[i] % 2 != 0)
        {
            if (test == 0)
            {
                sum++;
                test = 1;
            }
        }
        i++;
    }
    return (sum);
}