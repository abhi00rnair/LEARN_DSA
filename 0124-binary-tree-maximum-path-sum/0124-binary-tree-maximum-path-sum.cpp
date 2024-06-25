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
    int maxPathSum(TreeNode* root) {
        int ret=INT_MIN;
        func(root,ret);
        return ret;
    }
    int func(TreeNode*root,int &ret){
        if(root==nullptr){
            return 0;
        }
        int left=max(0,func(root->left,ret));
        int right=max(0,func(root->right,ret));
        int temp=root->val+left+right;
        ret=max(ret,temp);
        return root->val+max(left,right);
    }
};