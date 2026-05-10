int strStr(char* haystack, char* needle) {
    int nPos = 0, hayPos = 0;
    int haySize = 0;
    int needleSize = 0;
    for(int i = 0; haystack[i] != '\0'; i++) haySize++;
    for(int i = 0; needle[i] != '\0'; i++) needleSize++;

    printf("haySize = %d | needleSize = %d\n", haySize, needleSize);
    
    for(hayPos = 0; haystack[hayPos] != '\0'; hayPos++) {
        printf("haystack[%d] = %c\nneedle[%d] = %c\n",hayPos, haystack[hayPos], nPos, needle[nPos]);
        if(haystack[hayPos] == needle[nPos]) {
            if(needle[nPos+1] == '\0') {
                printf("Word match found at index %d!", hayPos - nPos);
                return hayPos - nPos;
            }
            nPos++;
        }
        else {
            hayPos = hayPos - nPos;
            nPos = 0;
        }
    }
    printf("No word match found!");
    return -1;
}