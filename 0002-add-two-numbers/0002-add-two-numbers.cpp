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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int result = toNum(l1) + toNum(l2);
        ListNode* res = new ListNode(result%10);
        result = result/10;
        ListNode* current = res;
        while(result>0){
            current->next= new ListNode(result%10);
            current = current->next;
            result = result/10;
        }
        return res;
    }

private: 
    int toNum(ListNode* root){
        if(root == nullptr) return 0;
        return root->val + 10*toNum(root->next);
    }
};