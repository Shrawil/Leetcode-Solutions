int removeElement(int* nums, int numsSize, int val) {
    if(nums == NULL) return 0;
    int k = 0, i;
    //for(i = 0; i < numsSize; i++) printf("%d\t", nums[i]);
    for(i = 0; i < numsSize; i++) {
        if(nums[i] != val) {
            nums[k++] = nums[i];
        }
    }
    //printf("\n");
    //for(i = 0; i < numsSize; i++) printf("%d\t", nums[i]);
    return k;
}