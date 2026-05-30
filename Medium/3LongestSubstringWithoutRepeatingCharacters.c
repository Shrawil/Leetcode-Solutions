int lengthOfLongestSubstring(char* s) {
    printf("%s\n", s);
    int len = 0, longest = 0;
    int start = 0;
    
    for(int i = 0; s[i] != '\0'; i++) {
        printf("\nLen = %d\t", len);
        for(int j = start; j < i; j++) { 
            printf("%c ", s[j]);
            if(s[i] == s[j]) {
                start = j + 1;
                len = i - start;
                break;
            }
        }
        len += 1;
        if(longest < len) {
            longest = len;
        }
    }
    return longest;
}
