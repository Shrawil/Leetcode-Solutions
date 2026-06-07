class Solution {
    public static int myAtoi(String s) {
        if (s == null || s.length() == 0) return 0;
        boolean firstFound = false, lastFound = false, negative = false;
        int first = 0, last = s.length();
        for(int i = 0; i < s.length(); i++) {
            char curr = s.charAt(i);
            if (!firstFound && curr != ' ' && curr != '-' && curr != '+' && (curr < '0' || curr > '9')) {
                // If we haven't found digits yet, and see a non-valid character, stop and check what we have
                break; 
            }
            
            if(firstFound == true && lastFound == true) {
                break;
            }
            else if(firstFound == false && s.charAt(i) == '-') {
                negative = true;
                firstFound = true;
                first = i + 1;
            }
            else if(firstFound == false && s.charAt(i) == '+') {
                firstFound = true;
                first = i + 1;
            }
            else if(firstFound == false && lastFound == false && (s.charAt(i) >= '0' && s.charAt(i) <= '9')) {
                firstFound = true;
                first = i;
            }
            else if(firstFound == true && lastFound == false) {
                if (s.charAt(i) >= '0' && s.charAt(i) <= '9') {
                    last = i+1;
                }
                else {
                    lastFound = true;
                    last = i;
                }
            }
        }
        if (first >= s.length() || s.charAt(first) < '0' || s.charAt(first) > '9') {
            return 0;
        }
        int num = 0;
        for(int i = first; i < last; i++) {
            int digit = s.charAt(i) - '0';
            if(num > Integer.MAX_VALUE / 10 || (num == Integer.MAX_VALUE / 10 && digit > 7)) {
                if(negative == false) return Integer.MAX_VALUE;
                else return Integer.MIN_VALUE;
            }
            num = (num * 10) + digit;
        }
        if(negative == true) return num*-1;
        return num;
    }
}
