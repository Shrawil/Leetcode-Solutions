int lengthOfLastWord(char* s) {
    if(s == NULL) return 0;
    int size = 0, i, sawChar = 0, wordSize = 0;
    for(i = 0; s[i] != '\0'; i++) size++;
    for(i = size - 1; i >= 0; i--) {
        char ch = s[i];
        //printf("i : %d | s[i] = %c | sawChar = %d | wordSize = %d\n", i, s[i], sawChar, wordSize);
        if(ch != ' ' && sawChar == 0) {
            sawChar = 1;
        }
        else if(ch == ' ' && sawChar == 1) {
            break;
        }
        
        if(sawChar == 1) wordSize++;
    }
    return wordSize;
}