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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>rett;
        if(root==nullptr){
            return rett;
        }
        queue<TreeNode*>que;
        que.push(root);
        while(!que.empty()){
            int n=que.size();
            vector<int>ret;
            for(int i=0;i<n;i++){
                TreeNode*temp=que.front();
                que.pop();
                if(temp->left!=nullptr){
                    que.push(temp->left);
                }if(temp->right!=nullptr){
                    que.push(temp->right);
                }
                ret.push_back(temp->val);
                
            }
            rett.push_back(ret);
        }
        return rett;
    }
};