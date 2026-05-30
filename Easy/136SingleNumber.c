int found(int *nums, int numsSize, int target, int idx) {
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == target && i != idx) return 1;
    }
    return 0;
}

int singleNumber(int* nums, int numsSize) {
    for(int i = 0; i < numsSize; i++) {
        printf("%d - ", nums[i]);
        if(!found(nums, numsSize, nums[i], i)) {
            printf("Duplicate not found!\n");
            return nums[i];
        }
        else printf("Duplicate found!\n");
    }
    return -1;
}
