void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {    
    //Merging array

    for(int i = 0; i < n; i++) {
        nums1[m + i] = nums2[i];
    }
    int total = m + n;
    int temp;
	for(int k = 0; k < total; k++) {
		int min = k;
		for(int p = k + 1; p < total; p++) {
			if(nums1[p] < nums1[min]) min = p;
		}
		if(min != k) {
			int temp = nums1[k];
			nums1[k] = nums1[min];
			nums1[min] = temp;
		}
	}
}