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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }        
        int rett=0;
        func(root,rett);
        return rett;

    }
    int func(TreeNode*root, int &rett){
        if(root==NULL){
            return 0;
        }
        int left=func(root->left,rett);
        int right=func(root->right,rett);
        rett=max(left+right,rett);
        return max(left,right)+1;

    }
};