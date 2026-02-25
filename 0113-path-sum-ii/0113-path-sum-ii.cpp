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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>rett;
        vector<int>temp;
        func(root,targetSum,temp,rett,0);
        return rett;

    }
    void func(TreeNode*root, int target, vector<int>&temp,vector<vector<int>>&rett, int sum){
        if(root==NULL){
            return;
        }
        temp.push_back(root->val);
        sum+=root->val;

        if(root->left==NULL && root->right==NULL){
            if(sum==target){
                rett.push_back(temp);
            }
        }else{
        func(root->left,target,temp,rett,sum);
        func(root->right,target, temp, rett,sum);
        }
        temp.pop_back();
    }


};