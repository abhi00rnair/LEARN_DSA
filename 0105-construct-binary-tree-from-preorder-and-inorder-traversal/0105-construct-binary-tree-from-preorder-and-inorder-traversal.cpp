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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        
        TreeNode * root=func(preorder,inorder,mp,0,preorder.size()-1,0,inorder.size()-1);
        return root;
    }
    
    TreeNode * func(vector<int>&preorder,vector<int>&inorder,map<int,int>&mp ,int prestrt,int preend, int inostrt, int inoend){
        if(prestrt>preend && inostrt>inoend){
            return NULL;
        }
        
        TreeNode *temp= new TreeNode(preorder[prestrt]);
        int j=mp[preorder[prestrt]];
        int left=j-inostrt;
        
        temp->left=func(preorder,inorder,mp,prestrt+1,prestrt+left,inostrt,inostrt-1);
        temp->right=func(preorder,inorder,mp,prestrt+left+1,preend,j+1,inoend);
        
        return temp;
        
    }
};