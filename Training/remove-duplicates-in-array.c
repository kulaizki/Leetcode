int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0 || numsSize == 1)
        return numsSize;
 
    int tmp[numsSize];
    int j = 0;

    for (int i = 0; i < numsSize - 1; i++)
        if (nums[i] != nums[i + 1])
            tmp[j++] = nums[i];
 
    tmp[j++] = nums[numsSize - 1];
 
    for (int i = 0; i < j; i++)
        nums[i] = tmp[i];
 
    return j;
}
