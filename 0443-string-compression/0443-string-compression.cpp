class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> s;
        int i = 0;
        while(i<chars.size()){
            int count = 0;
            char currentchar = chars[i];
            while(i<chars.size() && chars[i] == currentchar){
                count++;
                i++;
            }
            if(count == 1){
                s.push_back(currentchar);
            }
            else {
                s.push_back(currentchar);
                string st  = to_string(count);
                for(char c: st){
                    s.push_back(c);
                }
            }
        }
        chars = s;
        return chars.size();
    }
};