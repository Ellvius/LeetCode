class Solution {
    bool checknext(string s, string t){
        int cnt = 0; 
        for(int i = 0; i < s.size(); i++){
            if(s[i] != t[i]){
                cnt++;
                if(cnt > 1) return false;
            }
        }
        return cnt == 1;
    }

    int bfs(string begin, string end, map<string, vector<string>>& mpp){
        map<string, int> words;
        int cnt = 1;
        queue<string> q;
        q.push(begin);
        words[begin] = 1;

        while(!q.empty()){
            int size = q.size();
            while(size--){
                string s = q.front();
                if(s == end) return cnt;
                q.pop();

                for(auto it: mpp[s]){
                    if(!words[it]){
                        q.push(it);
                        words[it] = 1;
                    }
                }
            }
            cnt++;
        }

        return 0;
    }

public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        map<string, vector<string>> mpp;
        
        for(int i = 0; i < wordList.size(); i++){
            if(checknext(beginWord, wordList[i])){
                mpp[beginWord].push_back(wordList[i]);
            }
        }

        for(int i = 0; i < wordList.size(); i++){
            for(int j = 0; j < wordList.size(); j++){
                if(checknext(wordList[i], wordList[j])){
                    mpp[wordList[i]].push_back(wordList[j]);
                }
            }
        }

        return bfs(beginWord, endWord, mpp);
    }
};