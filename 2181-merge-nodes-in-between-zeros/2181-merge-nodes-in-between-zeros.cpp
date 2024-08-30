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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp = head;
        ListNode *s = head;
        int sum = 0;
        temp = temp->next;
        while(temp!=nullptr){
            sum+=temp->val;
            if(temp->val == 0){
                s->val = sum;
                s->next = temp->next;
                sum = 0;
                s = temp->next;
            }
            temp = temp->next;
        }
        return head;
    }
};