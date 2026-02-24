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
    int sumRootToLeaf(TreeNode* root) {
        string rett;
        return func(root,rett);
    }
    int func(TreeNode*root,string rett){
        if(root==NULL){
            return 0;
        }
        rett.push_back(root->val+'0');
        if(root->left==NULL && root->right==NULL){
            return func1(rett);
        }
        int tp=func(root->right,rett);
        int tr=func(root->left,rett);
        return tp+tr;
    }

    int func1(string str){
        int rett=0;
        int n=str.size(),tr=1;
        for(int i=n-1;i>=0;i--){
            if(str[i]=='1'){
                rett=rett+tr;
            }
            tr=tr*2;
        }
        return rett;
    }
};