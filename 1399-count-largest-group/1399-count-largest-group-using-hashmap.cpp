class Solution {
public:
    int countLargestGroup(int n) {
        int groups[37] = {0};
        int maxSum = 0;
        int count = 0;

        for(int i = 1; i <= n; i++){
            int sum = 0;
            int num = i;
            while(num != 0){
                sum += num % 10;
                num /= 10;
            }
            groups[sum]++;
            maxSum = max(maxSum, groups[sum]);
        }

        for(int i: groups){
            if(i == maxSum)
                count++;
        }

        return count;
    }
};