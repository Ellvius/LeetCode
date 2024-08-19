int missingNumber(int* nums, int numsSize) {
    int sum = 0;
    for(int i= 0; i<numsSize; i++){
        sum = sum + nums[i];
    }

    int result = (numsSize*(numsSize +1))/2;
    return result - sum;
}