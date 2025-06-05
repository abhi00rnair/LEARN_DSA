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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        vector<int>rett;
        queue<TreeNode*>Qq;
        Qq.push(root);
        while(!Qq.empty()){
            int size=Qq.size();
            TreeNode*temp=NULL;
            for(int i=0;i<size;i++){
                temp=Qq.front();
                Qq.pop();
                if(temp->left!=NULL){Qq.push(temp->left);}
                if(temp->right!=NULL){Qq.push(temp->right);}
            }
            rett.push_back(temp->val);
        }
        return rett;
        
    }
};