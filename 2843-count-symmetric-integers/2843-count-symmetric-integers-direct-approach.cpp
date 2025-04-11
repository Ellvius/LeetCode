class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low; i <= high; i++){
            string num = to_string(i);
            int len = num.length();

            if(len % 2) continue;

            int left = stoi(num.substr(0, len/2));
            int right = stoi(num.substr(len/2, len/2));

            int leftSum = 0;
            int rightSum = 0;
            while(left != 0){
                leftSum += (left % 10);
                left/=10;
            }

            while(right != 0){
                rightSum += (right % 10);
                right /= 10;
            }

            if(leftSum == rightSum) count++;

        }

        return count;
    }


};