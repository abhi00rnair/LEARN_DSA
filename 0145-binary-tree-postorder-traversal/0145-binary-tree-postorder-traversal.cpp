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
        vector<int>ret;
        if(root==nullptr){
            return ret;
        }
        stack<TreeNode*>st1;
        stack<int>st2;
        st1.push(root);
        
        
        while(!st1.empty()){
            TreeNode*temp=st1.top();
            st1.pop();
            st2.push(temp->val);
            if(temp->left!=nullptr)
                st1.push(temp->left);
            if(temp->right!=nullptr)
                st1.push(temp->right);
        }
        
        while(!st2.empty()){
            ret.push_back(st2.top());
            st2.pop();
        }
        return ret;
    }
};