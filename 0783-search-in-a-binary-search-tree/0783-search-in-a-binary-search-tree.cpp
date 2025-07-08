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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode*temp=root;
        return func(temp,val);
        
    }
    TreeNode* func(TreeNode*root, int val){
        if(root==NULL){
            return NULL;
        }
        if(root->val==val){
            return root;
        }
        if(root->val>val){
            return func(root->left,val);
        }
        return func(root->right,val);
    }
};