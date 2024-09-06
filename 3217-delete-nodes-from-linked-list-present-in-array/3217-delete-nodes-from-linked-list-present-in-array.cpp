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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> m(nums.begin(), nums.end());
        
        while (head != nullptr && m.find(head->val) != m.end()) {
            head = head->next;
        }
        
        ListNode *temp = head;
        ListNode *prev = nullptr;
        
        while (temp != nullptr) {
            if (m.find(temp->val) != m.end()) {
                prev->next = temp->next; 
            } else {
                prev = temp; 
            }
            temp = temp->next; 
        }
        
        return head;
    }
};