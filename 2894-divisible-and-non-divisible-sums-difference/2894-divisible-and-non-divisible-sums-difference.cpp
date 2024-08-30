class Solution {
public:
    int differenceOfSums(int n, int m) {
        int n1= n/m;
        int n2 = (n1*(n1 + 1))/2;
        int num2 = m*n2;
        return ((n*(n+1))/2) - (2*num2);
    }
};