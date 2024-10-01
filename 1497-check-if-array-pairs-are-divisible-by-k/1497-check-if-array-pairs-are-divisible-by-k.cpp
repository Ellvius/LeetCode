class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> map;
        for(int i: arr){
            map[((i%k)+k)%k]++;
        }
        for(int i = 0; i < k; i++){
            cout<<i<<' '<<map[i]<<endl;
        }
        cout<<"....."<<endl;
        if((map[0]%2)!=0) return false;
        for(int i = 1; i < k/2 +1; i++){
            cout<<map[i]<<' '<<map[k-i]<<' '<<i<<endl;
            if(map[i]!=map[k-i]) return false;
        }
        return true;
    }
};