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
int count=0;
    void recoverTree(TreeNode* root) {
        vector<int>inorder1;
        inorder(root,inorder1);

        int x=INT_MIN,y=INT_MIN;
        int n=inorder1.size();
        for(int i=0;i<n-1;i++){
            if(inorder1[i] > inorder1[i+1]){
                y = inorder1[i+1];
                if(x==INT_MIN)
                    x = inorder1[i];
                else
                    break;
            }
        }

        func(root,x,y);
    }

    void func(TreeNode*root, int x, int y){
        if(root==NULL|| count==2){
            return;
        }
        if(root->val==x){
            root->val=y;
        }
        else if(root->val==y){
            root->val=x;
        }
        func(root->left,x,y);
        func(root->right,x,y);
    }

    void inorder(TreeNode*root, vector<int>&tp){
        if(root==NULL){
            return;
        }
        inorder(root->left,tp);
        tp.push_back(root->val);
        inorder(root->right,tp);
    }
};