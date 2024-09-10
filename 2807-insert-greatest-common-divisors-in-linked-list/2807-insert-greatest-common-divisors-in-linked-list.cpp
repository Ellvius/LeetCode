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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *ans = new ListNode(0);  
        ListNode *temp = ans;  
        
        while(head && head->next) { 
            temp->next = new ListNode(head->val);  
            temp = temp->next;  
            int g = gcd(head->val, head->next->val);
            temp->next = new ListNode(g);
            temp = temp->next;  
            head = head->next;
        }
        
        temp->next = head;
        
        return ans->next; 
    }

private:
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
};
