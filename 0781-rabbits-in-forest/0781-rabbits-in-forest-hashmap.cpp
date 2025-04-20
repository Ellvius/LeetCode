class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> rabbits(1001);
        int count = 0;

        for(int num: answers){
            if(rabbits[num] == num + 1){
                rabbits[num] = 1;
                count+= num + 1;
            }
            else 
                rabbits[num]++;
        }

        for(auto& [color, f]: rabbits){
            count+= color + 1;
        }

        return count;
    }
};