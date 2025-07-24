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
    bool hasPathSum(TreeNode* root, int targetSum) {
        return func(root, targetSum, 0);
    }

    bool func(TreeNode*root, int target, int temp){
        if(root==NULL){
            return false;
        }
        if(temp+root->val==target && root->left==NULL && root->right==NULL){
            return true;
        }

        if(root->left!=NULL && func(root->left,target, temp+root->val)==true){
            return true;
        }
        if(root->right!=NULL && func(root->right, target, temp+root->val)==true){
            return true;
        }
        return false;
    }
};