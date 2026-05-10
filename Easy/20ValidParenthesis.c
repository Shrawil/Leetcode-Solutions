bool isValid(char* s) {
    if(s == NULL) return true;
    int size = 0, top = -1;
    for(; s[size] != '\0'; size++);
    char stk[size];
    //printf("Size of stack : %d\n", size);
    for(int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '[') {
            stk[++top] = ch;
        }
        else {
            if(ch == ')' || ch == '}' || ch == ']') {
                if(top == -1) return false;
                char pop = stk[top--];
                if(pop == '(' && ch != ')' || pop == '{' && ch != '}' || pop == '[' && ch != ']') {
                    return false;
                }
            }
        }
    }
    if(top != -1) return false;
    return true;
}