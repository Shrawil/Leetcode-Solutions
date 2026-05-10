bool isPalindrome(int x) {
    if((x * 10) >= INT_MAX || x < 0) return false;
    int num = x;
    long int rev = 0;
    while(num != 0) {
        int digit = num % 10;
        num /= 10;
        rev = (rev * 10) + digit;
        //printf("Digit : %d| Num : %d | Rev : %d\n",digit, num, rev);
    }
    //printf("Num = %d and Rev = %d\n", x, rev);
    if(x == rev) return true; else return false;
}