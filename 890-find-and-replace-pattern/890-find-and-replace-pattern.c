char ** findAndReplacePattern(char ** words, int wordsSize, char * pattern, int* returnSize){
    int len = strlen(pattern);
    int count = 0;
    char** ans = malloc(sizeof(int*));
    for (int i = 0 ; i < wordsSize ; i++){
        bool box[128] = {0};
        bool box2[128] = {0};
        int key[128] = {0};
        int j = 0;
        for ( j = 0 ; j < len ; j++)
        {
            if (!box[pattern[j]] && !box2[words[i][j]])
            {
                key[pattern[j]] = words[i][j]-pattern[j];
                box[pattern[j]]++;
                box2[words[i][j]]++;
            }
            else if (box[pattern[j]] != box2[words[i][j]] || key[pattern[j]] != words[i][j]-pattern[j]){
                break;
            }
        }
        if (j == len)
        {
            ans = realloc(ans,sizeof(int*)*(count+1));
            ans[count] = words[i];
            count++;
        }
    }
    *returnSize = count;
    return ans;
}