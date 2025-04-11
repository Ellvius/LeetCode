class Solution {
public:
    int sumBase(int n, int k) {
        int res = 0;
        while( n > 0){
            int rem = n % k;
            n /= k;
            res += rem;
        }

        return res;
    }
};