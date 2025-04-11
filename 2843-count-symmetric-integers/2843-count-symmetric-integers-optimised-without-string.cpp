class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low; i <= high; i++){
            int num = i, leftSum = 0, rightSum = 0, len = 0;
            int nums[5];

            while(num > 0){
                nums[len++] = num % 10;
                num /= 10;
            }

            if(len % 2) continue;

            int half = len / 2;
            for(int j = 0; j < half; j++){
                leftSum += nums[j];
                rightSum += nums[half + j];
            }

            if(leftSum == rightSum) 
                count++;
        }

        return count;
    }


};