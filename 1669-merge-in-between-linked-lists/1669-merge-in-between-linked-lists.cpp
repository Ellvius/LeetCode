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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if(list1 == nullptr){
            return list2;
        }
        ListNode* aNode = nullptr;
        ListNode *bNode = nullptr;
        ListNode* temp = list1;
        int pos = 0;

        while(temp!=nullptr ){
            if(pos == a-1){
                aNode = temp;
            }
            if(pos == b+1){
                bNode = temp;
            }    
            temp = temp->next;
            pos++;
        }
        if(list2 == nullptr){
            aNode->next = bNode;
        }
        else {
            aNode->next = list2;
            ListNode *temp2 = list2;
            while(temp2->next!=nullptr){
                temp2 = temp2->next;
            }
            temp2->next = bNode;
        }
        return list1;
    }
};