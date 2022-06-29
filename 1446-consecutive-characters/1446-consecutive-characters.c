#define MAX(x,y) (x > y ? x : y)

int maxPower(char * s){
    int i = 0, j = 0, sum = 0;
    while (s[i])
    {
        if (s[i] == s[i + 1])
        {
            while (s[i] == s[i + 1])
                i++;
            sum = MAX(sum, (i - j));
        }
        i++;
        j = i;
    }
    return (sum + 1);
}