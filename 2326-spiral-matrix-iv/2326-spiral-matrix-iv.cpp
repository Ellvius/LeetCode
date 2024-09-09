/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n,-1));

        int rs = 0;
        int cs = 0;
        int re = m-1;
        int ce = n-1;
        ListNode* t = head;
        while(t){
            for(int c = cs; c <= ce && t; c++){
                ans[rs][c] = t->val;
                t = t->next;
            }
            if(!t) break;
            rs++;
            for(int r = rs; r <= re && t; r++){
                ans[r][ce] = t->val;
                t = t->next;
            }
            if(!t) break;
            ce--;
            for(int c = ce; c >=cs && t; c--){
                ans[re][c] = t->val;
                t = t->next;
            }
            if(!t) break;
            re--;
            for(int r = re; r >=rs && t; r--){
                ans[r][cs] = t->val;
                t = t->next;
            }
            if(!t) break;
            cs++;
        }
        return ans;
    }
};