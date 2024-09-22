class Solution {
public:
    int findKthNumber(int n, int k) {
        int cur = 1;
        k--;

        while (k > 0) {
            long long steps = countsteps(n, cur, cur + 1);
            if (steps <= k) {
                cur++;
                k -= steps;
            } else {
                cur *= 10;
                k--;
            }
        }
        return cur;
    }

private:
    long long countsteps(int n, long long pr, long long prnx) {
        long long steps = 0;
        while (pr <= n) {
            steps += min((long long)n + 1, prnx) - pr;
            pr *= 10;
            prnx *= 10;
        }
        return steps;
    }
};