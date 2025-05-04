class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int, int>, int> mpp;
        int count = 0;

        for(auto& v: dominoes){
            int i = v[0], j = v[1];
            if(i > j) swap(i,j);
            count += mpp[make_pair(i,j)]++;
        }
        return count;
    }
};