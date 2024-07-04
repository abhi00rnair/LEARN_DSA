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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        TreeNode*head=func(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mp);
        return head;
    }
    
    TreeNode* func(vector<int>& inorder, int st1,int end1,vector<int>& postorder, int st2, int end2,map<int,int>&mp){
        if(end1<st1 || end2<st2){
            return NULL;
        }
        int temp=mp[postorder[end2]];
        TreeNode* root=new TreeNode(postorder[end2]);
        
        int num=temp-st1;
        root->left=func(inorder,st1,temp-1,postorder,st2,st2+num-1,mp);
        root->right=func(inorder,temp+1,end1, postorder,st2+num,end2-1,mp);
        
        return root;
    }
};