class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        int pclNum = total / cost1;
        long long count = 0;

        for(int i = 0; i <= pclNum; i++){
            int bal = total - i*cost1;
            int penNum = bal / cost2;
            count += penNum + 1;
        }

        return count;
    }
};