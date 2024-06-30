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
    int sumNumbers(TreeNode* root) {
        vector<int>ret;
        //p<int,int>st;
        func(root,0,ret);
        int rett=0;
        for(auto it:ret){
            rett+=it;
        }
        return rett;
    }
    
    void func(TreeNode* root,int sum,vector<int>&ret){
        if(root==nullptr){
            return;
        }
        sum=sum*10+root->val;
        //.push({root->val,parent}); 
        if(root->left==nullptr && root->right==nullptr){
            ret.push_back(sum);
            return;
        }
        func(root->left,sum,ret);
        func(root->right,sum,ret);
    }
};