class Solution {
public:
    int sumBase(int n, int k) {
        return (n==0) ? 0: n%k + sumBase(n/k, k);
    }
};