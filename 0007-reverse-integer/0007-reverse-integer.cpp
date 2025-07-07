class Solution {
public:
    int reverse(int x) {
        long n = x;
        int sign = x < 0 ? -1: 1;
        n = abs(n);
        long r = 0;

        while(n > 0){
            r = (r * 10) + (n % 10);
            n /= 10;
        }
        r *= sign;
        
        if(r > INT32_MAX || r < INT32_MIN)
            return 0;

        return r;
    }
};