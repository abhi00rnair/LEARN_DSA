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
    bool isBalanced(TreeNode* root) {
        int ret=func(root);
        return ret!=-1?true:false;
    }
    
    int func(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int left=func(root->left);
        int right=func(root->right);
        if(left==-1 || right==-1)return -1;
        if(abs(left-right)>1)return -1;
        return max(left,right)+1;
    }
};