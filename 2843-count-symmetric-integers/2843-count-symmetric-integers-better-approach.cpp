class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low; i <= high; i++){
            string num = to_string(i);
            int len = num.length();

            if(len % 2) continue;

            int half = len/2;
            int leftSum = 0, rightSum = 0;
            
            for(int j = 0; j < half; j++)
                leftSum += num[j] - '0';

            for(int j = half; j < len; j++)
                rightSum += num[j] - '0';

            if(leftSum == rightSum) 
                count++;
        }

        return count;
    }


};