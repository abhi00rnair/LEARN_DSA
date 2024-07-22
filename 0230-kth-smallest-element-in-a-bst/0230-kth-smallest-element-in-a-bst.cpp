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
    int kthSmallest(TreeNode* root, int k) {
        TreeNode*ret=NULL;
        int count=0;
        func(root,k,count,ret);
        return ret->val;
    }
    void func(TreeNode*root, int k ,int &count,TreeNode*&ret){
        if(root==NULL){
            return;
        }
        func(root->left,k,count,ret);
        count++;
        if(count==k){
            ret=root;
            return;
        }
        func(root->right,k,count,ret);

    }
};