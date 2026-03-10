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
    bool findTarget(TreeNode* root, int k) {
        vector<int>indo;
        if(root==NULL){
            return false;
        }
        func(root,indo);
        int left=0,right=indo.size()-1;
        while(left<right){
            int tp=indo[left]+indo[right];
            if(tp==k){
                return true;
            }else if(tp<k){
                left=left+1;
            }else{
                right=right-1;
            }
        }
        return false;
    }

    void func(TreeNode*root, vector<int>&indo){
        if(root==NULL){
            return;
        }
        func(root->left, indo);
        indo.push_back(root->val);
        func(root->right,indo);
    }
};