class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> frequency;
        int maxFreq = 0;

        for(int& num: nums){
            frequency[num]++;
            if(frequency[num] > maxFreq)
                maxFreq = frequency[num];
        }

        if(maxFreq == 1) return nums.size();

        int totalElements = 0;
        for(int& num: nums){
            if(frequency[num] == maxFreq)
                totalElements += 1;
        }

        return totalElements;
    }
};