class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int chalk_sum = 0;
        for(int i = 0; i<chalk.size(); i++){
            chalk_sum+=chalk[i];
        }

        int rem_chalk = k%chalk_sum;

        for(int i=0; i<chalk.size(); i++){
            if(rem_chalk<chalk[i]){
                return i;
            }
            rem_chalk-=chalk[i];
        }

        return 0;
    }
};