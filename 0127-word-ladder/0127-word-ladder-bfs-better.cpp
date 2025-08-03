class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(), wordList.end());
        int cnt = 1;
        queue<string> q;
        q.push(beginWord);

        while(!q.empty()){
            int size = q.size();
            while(size--){
                string s = q.front();
                if(s == endWord) return cnt;
                q.pop();

                for(int j = 0; j < s.size(); j++){
                    string t = s;
                    for(int i = 'a'; i <= 'z'; i++){
                        t[j] = i;
                        if(st.find(t) != st.end()){
                            q.push(t);
                            st.erase(t);
                        }
                    }
                }
            }
            cnt++;
        }

        return 0;
    }
};