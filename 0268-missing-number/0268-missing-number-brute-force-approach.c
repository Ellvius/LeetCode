int missingNumber(int* nums, int numsSize) {
    for(int i= 0; i<=numsSize; i++){
        int flag = 0; 
        for(int j = 0; j<numsSize; j++){
            if(nums[j]==i){
                flag = 1;
            }
        }
        if(flag == 0){
            return i;
        }
    }
    return 0;
}