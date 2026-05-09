char* getRes(int count, char* str) {
    int i;
    char *res = (char *)malloc((count + 1) * sizeof(char));
    for(i = 0; i < count; i++) {
        res[i] = str[i];
    }
    res[i] = '\0';
    return res;
}

char* longestCommonPrefix(char** strs, int strsSize) {
    int size = 0;
    int count = 0;
    for(size = 0; strs[0][size] != '\0'; size++); 
    for(int c = 0; c < size; c++) {
        char ch = strs[0][c];
        for(int r = 0; r < strsSize; r++) {
            if(ch != strs[r][c]) {
                char *res = getRes(count, strs[0]);
                return res;
            }
        }
        count++;
    }
    return strs[0];
}