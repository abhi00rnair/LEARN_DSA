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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        return func(root).second;
    }

    pair<int,TreeNode*> func(TreeNode*root){
        if(root==NULL){
            return {0,NULL};
        }

        auto tp1=func(root->left);
        auto tp2=func(root->right);

        if(tp1.first>tp2.first){
            return {tp1.first+1,tp1.second};
        }
        if(tp1.first<tp2.first){
            return {tp2.first+1,tp2.second};
        }
        return {tp1.first+1,root};
    }
};