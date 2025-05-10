class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0, sum2 = 0;
        int z1 = 0, z2 = 0;

        for(int n: nums1){
            if(n == 0) z1++;
            else sum1 += n;
        }

        for(int n: nums2){
            if(n == 0) z2++;
            else sum2 += n;
        }
        sum1+=z1;
        sum2+=z2;

        if(sum1 == sum2) return sum1;
        if(sum1 < sum2 && z1 == 0) return -1;
        if(sum2 < sum1 && z2 == 0) return -1;

        return max(sum1, sum2);
    }
};