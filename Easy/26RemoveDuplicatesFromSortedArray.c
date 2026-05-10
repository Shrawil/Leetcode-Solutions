int removeDuplicates(int* nums, int numsSize) {
    int k = 0, i;
    //for(i = 0; i < numsSize; i++) printf("%d\t", nums[i]);
    for(i = 1; i < numsSize; i++) {
        if(nums[i] != nums[k]) {
            nums[++k] = nums[i];
        }
    }
    //printf("\n");
    //for(i = 0; i < numsSize; i++) printf("%d\t", nums[i]);
    return k+1;
}