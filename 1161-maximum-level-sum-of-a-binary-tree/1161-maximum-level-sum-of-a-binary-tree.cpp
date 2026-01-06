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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>qq;
        if(root==NULL){
            return 0;
        }
        qq.push(root);
        int level=0;
        int rett=1;
        int currsum=root->val;
        while(!qq.empty()){
            int n=qq.size();
            int sum=0;
            for(int i=0;i<n;i++){
                TreeNode*temp=qq.front();
                qq.pop();
                sum+=temp->val;
                if(temp->left){
                    qq.push(temp->left);
                }if(temp->right){
                    qq.push(temp->right);
                }
            }
            level++;
            if(currsum<sum){
                rett=level;
                currsum=sum;
            }
        }
        return rett;
    }
};