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
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        pair<TreeNode*, int> res = findLCA(root);
        return res.first;
    }
private:
    pair<TreeNode*, int> findLCA(TreeNode* cur){
        if(!cur) return {nullptr, 0};

        pair<TreeNode*, int> left = findLCA(cur->left);
        pair<TreeNode*, int> right = findLCA(cur->right);

        if(left.second == right.second)
            return {cur, 1 + left.second};
        else 
            return (left.second > right.second) ? 
                pair<TreeNode*, int>{left.first, 1 + left.second} : 
                pair<TreeNode*, int>{right.first, 1 + right.second};
    }
};