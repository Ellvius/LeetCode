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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root == nullptr) return res;

        vector<int> lefttree = postorderTraversal(root->left);
        vector<int> righttree = postorderTraversal(root->right);

        res.insert(res.end(), lefttree.begin(), lefttree.end());
        res.insert(res.end(), righttree.begin(), righttree.end());
        res.push_back(root->val);

        return res;
    }
};