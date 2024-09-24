class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> arr1set;
        for (int i = 0; i < arr1.size(); i++) {
            string s = to_string(arr1[i]);
            for (int j = s.size(); j > 0; j--) {
                string sub = s.substr(0, j);
                if (arr1set.find(sub) != arr1set.end()) {
                    break;
                }
                arr1set.insert(sub);
            }
        }
        int l = 0;
        int size = arr2.size();
        for (int i = 0; i < size; i++) {
            string s = to_string(arr2[i]);
            for (int j = s.size(); j > 0; j--) {
                string str = s.substr(0, j);
                if (j > l) {
                    if (arr1set.find(str) != arr1set.end()) {
                        l = j;
                        break;
                    }
                }
            }
        }
        return l;
    }
};