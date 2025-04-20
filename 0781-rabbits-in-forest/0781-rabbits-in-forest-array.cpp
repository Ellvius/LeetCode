class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int rabbits[1001] = {0};
        int count = 0;

        for(int num: answers){
            if(rabbits[num] == num + 1){
                rabbits[num] = 1;
                count+= num + 1;
            }
            else 
                rabbits[num]++;
        }

        for(int i = 0; i < 1001; i++){
            if(rabbits[i] > 0)
            count+= i + 1;
        }

        return count;
    }
};