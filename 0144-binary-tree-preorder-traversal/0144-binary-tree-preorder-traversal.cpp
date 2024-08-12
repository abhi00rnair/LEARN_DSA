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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>pre;
        TreeNode*temp=root;
        func(pre,temp);
        return pre;
    }
    void func(vector<int>&pre,TreeNode*temp){
        if(temp==NULL){
            return;
        }
        pre.push_back(temp->val);
        func(pre,temp->left);
        func(pre,temp->right);
    }
};