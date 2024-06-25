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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ret;
        queue<TreeNode*>que;
        func(root,ret,que);
        return ret;
        
    }
    void func(TreeNode*root,vector<vector<int>>&ret,queue<TreeNode*>&que){
        if(root!=nullptr){
            que.push(root);
        }
        int flag=0;
        while(!que.empty()){
            int size=que.size();
            vector<int>tempp(size);
            for(int i=0;i<size;i++){
                TreeNode*temp=que.front();
                que.pop();
                int itt=0;
                if(flag==0){
                  itt=i;  
                }else{
                    itt=size-1-i;
                }
                tempp[itt]=temp->val;
                if(temp->left!=nullptr){
                    que.push(temp->left);
                }
                if(temp->right!=nullptr){
                    que.push(temp->right);
                }
            }
            ret.push_back(tempp);
            flag=!flag;
        }
    }
};