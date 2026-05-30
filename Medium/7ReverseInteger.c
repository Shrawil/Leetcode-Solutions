int reverse(int x) {
    int copy = x; 
    long int rev = 0;
    while(copy != 0) {
        int digit = copy % 10;
        rev = (rev * 10) + digit;
        copy /= 10;
    }
    if(rev > INT_MAX || rev < INT_MIN) return 0;
    return rev;
}
