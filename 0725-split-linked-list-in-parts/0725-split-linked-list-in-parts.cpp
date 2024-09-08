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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k, nullptr);
        int n = 0;
        ListNode *temp = head;
        while(temp){
            n++;
            temp = temp->next;
        }

        int num = n / k;
        int rem = n % k;

        ListNode *current = head;
        
        for (int i = 0; i < k && current != nullptr; ++i) {
            ans[i] = current;
            int currentsize = num + (i < rem ? 1 : 0);
            
            for (int j = 1; j < currentsize; ++j) {
                if (current) current = current->next;
            }
            
            if (current) {
                ListNode* next_part = current->next;
                current->next = nullptr;  
                current = next_part;
            }
        }
        return ans;
    }
};