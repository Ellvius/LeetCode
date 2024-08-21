void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortColors(int* nums, int numsSize) {
    int i = 0, k=0;
    int j = numsSize-1;
    
    while(k<=j){
        if(nums[k] == 0){
            swap(&nums[k], &nums[i]);
            i++;
        }
        else if(nums[k] == 2){
            swap(&nums[k], &nums[j]);
            j--;
            k--;
        }
        k++;
    }
}