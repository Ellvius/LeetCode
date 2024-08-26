/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> n;
        if(root == nullptr) return n;

        stack<Node*> s;
        s.push(root);

        while(!s.empty()){
            Node* p = s.top();
            s.pop();
            n.push_back(p->val);

            for(Node* child : p->children){
                s.push(child);
            }

        }
        reverse(n.begin(), n.end());
        return n;
        
    }
};