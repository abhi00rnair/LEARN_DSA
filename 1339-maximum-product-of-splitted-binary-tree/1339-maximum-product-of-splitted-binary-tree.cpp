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
    int maxProduct(TreeNode* root) {
        int tot_sum=0;
        if(root==NULL){
            return 0;
        }
        queue<TreeNode*>qq;
        qq.push(root);
        while(!qq.empty()){
            TreeNode*temp=qq.front();
            qq.pop();
            tot_sum+=temp->val;
            if(temp->left){
                qq.push(temp->left);
            }if(temp->right){
                qq.push(temp->right);
            }
        }
        long long rett=0;
        int mod=1e9+7;
        dfs(root,tot_sum,rett,mod);
        return rett%mod;
    }
    int dfs(TreeNode*root, int tot_sum, long long&rett, int mod){
        int left=0,right=0;
        if(root->left){
            left=dfs(root->left,tot_sum,rett, mod);
        }if(root->right){
            right=dfs(root->right,tot_sum,rett,mod);
        }
        int temp_sum=root->val+left+right;
        long long other_sum=tot_sum-temp_sum;
        rett=max(rett,(other_sum*temp_sum));
        return temp_sum;
    }
};