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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        vector<vector<int>>rett;
        queue<TreeNode*>qq;
        qq.push(root);
        while(!qq.empty()){
            int ss=qq.size();
            vector<int>temp;
            for(int i=0;i<ss;i++){
                TreeNode*tp=qq.front();
                qq.pop();
                temp.push_back(tp->val);

                if(tp->left!=NULL){
                    qq.push(tp->left);
                }
                if(tp->right!=NULL){
                    qq.push(tp->right);
                }
            }
            rett.push_back(temp);
        }
        reverse(rett.begin(), rett.end());
        return rett;
    }
};