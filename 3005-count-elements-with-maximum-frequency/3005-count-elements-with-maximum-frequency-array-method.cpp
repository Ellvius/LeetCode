class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101] = {0};
        int maxFreq = 0;

        for(int& num: nums){
            freq[num]++;
            maxFreq = max(maxFreq, freq[num]);
        }

        if(maxFreq == 1) return nums.size();

        int count = 0;
        for(int& f: freq){
            if(f == maxFreq)
                count+=f;
        }

        return count;
    }
};