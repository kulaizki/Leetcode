double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){

    int mergedSize = nums1Size+nums2Size;
    int arr[mergedSize];

    for (int i = 0; i < nums1Size; i++)
        arr[i] = nums1[i];

    for (int i = 0; i < nums2Size; i++)
        arr[nums1Size+i] = nums2[i];
    
    for (int i = 0; i < mergedSize-1; i++) {
        for (int j = i+1; j < mergedSize; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    double median;
    if (mergedSize % 2)
        median = arr[mergedSize/2];

    else
        median = (arr[mergedSize/2-1] + arr[mergedSize/2]) / 2.0;

    return median;
}



