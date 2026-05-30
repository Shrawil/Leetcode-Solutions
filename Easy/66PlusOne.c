/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1;
    *returnSize = digitsSize;
    for(int i = digitsSize - 1; i >= 0 && carry == 1; i--) {
        digits[i] += carry;
        
        if(digits[i] == 10) {
            digits[i] = 0;
            carry = 1;
        }
        else carry = 0;
    }
    if(carry == 0) {
        return digits;
    }
    *returnSize += 1;
    int *new = (int *)malloc((*returnSize) * sizeof(int));
    new[0] = 1;
    for(int i = 1; i < *returnSize; i++) {
        new[i] = 0;
    }
    return new;
}
