class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> mpp(10,0);
        for(int digit: digits) mpp[digit]++;

        vector<int> res;
        for(int i = 1; i < 10; i++){
            if(mpp[i] == 0) continue;
            mpp[i]--;
            for(int j = 0; j < 10; j++){
                if(mpp[j] == 0) continue;
                mpp[j]--;
                for(int k = 0; k < 10; k+=2){
                    if(mpp[k] == 0) continue;
                    res.push_back(i*100+j*10+k);
                }
                mpp[j]++;
            }
            mpp[i]++;
        }
        return res;
    }
};