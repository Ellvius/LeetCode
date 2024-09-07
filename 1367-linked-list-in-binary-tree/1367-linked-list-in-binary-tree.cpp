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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSubPath(ListNode* head, TreeNode* root) {
        return searchTree(head, root);
    }

private:
    bool dfs(ListNode* head, TreeNode* node) {
        if (!head) return true;  
        if (!node) return false; 
        if (node->val != head->val) return false;

        return dfs(head->next, node->left) || dfs(head->next, node->right);
    }

    bool searchTree(ListNode* head, TreeNode* node) {
        if (!node) return false;
        if (dfs(head, node)) return true;
        return searchTree(head, node->left) || searchTree(head, node->right);
    }
};
