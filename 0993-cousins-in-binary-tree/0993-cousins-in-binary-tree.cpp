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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val == x || root->val == y){
            return false;
        }
        cout<<depth(root,x)<<' '<<depth(root, y)<<endl;
        cout<<parent(root,x)<<' '<<parent(root, y)<<endl;

        if(depth(root, x) == depth(root, y)){
            if(parent(root, x) != parent(root, y)){
                return true;
            }
        }
        return false;
    }
private:
    int depth(TreeNode* root, int x){
        if(root == nullptr){
            return 0;
        }
        if(root->val == x){
            return 1;
        }
        if(depth(root->left, x)==0 && depth(root->right, x)==0){
            return 0;
        }
        else if(depth(root->left,x)!=0){
            return 1 + depth(root->left, x);
        }
        else if(depth(root->right,x)!=0){
            return 1 + depth(root->right, x);
        }
        else {
            return 0;
        }
    }
    TreeNode *parent(TreeNode *root, int x){
        if(root == nullptr){
            return nullptr;
        }
        if(root->left == nullptr && root->right == nullptr){
            return nullptr;
        }
        if(root->left!=nullptr){
            if(root->left->val == x){
                return root;
            }
        }
        if(root->right!=nullptr){
            if(root->right->val == x){
                return root;
            }
        }

        if(parent(root->left, x) == nullptr && parent(root->right, x) == nullptr){
            return nullptr;
        }
        else if(parent(root->left, x)!=nullptr){
            return parent(root->left, x);
        }
        else if(parent(root->right, x)!=nullptr){
            return parent(root->right, x);
        }
        return nullptr;
    }
};