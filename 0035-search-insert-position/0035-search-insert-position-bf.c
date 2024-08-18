int searchInsert(int* nums, int numsSize, int target) {
    int i = 0;
    while(i< numsSize && nums[i]<=target){
        if(nums[i]==target) return i;
        i++;
    }
    return i;
}