class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int size = timePoints.size();
        vector<int> t(size);
        for(int i = 0; i<timePoints.size(); i++){
            int min = (timePoints[i][0]-'0') *10*60 + (timePoints[i][1]-'0')*60 +(timePoints[i][3]-'0')*10 + (timePoints[i][4]-'0');
            t[i] = min;
        }

        sort(t.begin(), t.end());
        int dif = 60*24 - t[size-1] + t[0];
        cout<<dif<<endl;
        for(int i = 0; i<size-1; i++){
            int cdif = t[i+1] - t[i];
            cout<<t[i+1]<<'-'<<t[i]<<'='<<cdif<<endl;
            if(cdif < dif){
                dif = cdif;
            }
        }
        return dif;
    }
};