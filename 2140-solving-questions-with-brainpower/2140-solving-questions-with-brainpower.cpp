class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int lastIndex = questions.size() - 1;
        vector<long long> points(lastIndex + 1, 0);

        for(int i = lastIndex ; i >= 0; i--){
            points[i] = questions[i][0];
            if(questions[i][1] + i + 1 <= lastIndex) {
                points[i] += points[i + questions[i][1] + 1];
            } 
            if(i < lastIndex) {
                points[i] = max(points[i], points[i + 1]);
            }
        }
        return points[0];
    }
};