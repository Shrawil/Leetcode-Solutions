int getNum(char ch) {
    switch(ch) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}

int romanToInt(char s[]) {
    int total = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if(getNum(s[i]) < getNum(s[i+1])) total -= getNum(s[i]);
        else total += getNum(s[i]);
    }
    return total;
}
