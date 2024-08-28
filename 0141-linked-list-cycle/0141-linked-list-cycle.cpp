/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slowptr = head;
        ListNode *fastptr = head;

        while(slowptr!=nullptr && fastptr!=nullptr && fastptr->next != nullptr){
            slowptr = slowptr->next;
            fastptr = fastptr->next->next;
            if(fastptr == slowptr){
                return true;
            }
        }
        return false;
    }
};