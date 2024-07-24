/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>lca1;
        vector<TreeNode*>lca2;
        TreeNode*temp1=root;
        TreeNode*temp2=root;
        while(temp1!=p){
            lca1.push_back(temp1);
            if(temp1->val>p->val){
                temp1=temp1->left;
            }else{
                temp1=temp1->right;
            }
        }
        lca1.push_back(temp1);
        while(temp2!=q){
            lca2.push_back(temp2);
            if(temp2->val>q->val){
                temp2=temp2->left;
            }else{
                temp2=temp2->right;
            }
        }
        lca2.push_back(temp2);
        int n=min(lca1.size(),lca2.size());
        TreeNode*ret=NULL;
        for(int i=0;i<n;i++){
            if(lca1[i]->val==lca2[i]->val){
                ret=lca1[i];
            }
        }
        return ret;
    }
};