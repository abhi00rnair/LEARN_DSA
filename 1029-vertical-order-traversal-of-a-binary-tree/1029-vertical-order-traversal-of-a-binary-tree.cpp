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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        queue<pair<TreeNode*,pair<int,int>>>Qq;
        map<int,map<int,multiset<int>>>mp;
        Qq.push({root,{0,0}});
        while(!Qq.empty()){
            auto it=Qq.front();
            Qq.pop();
            TreeNode*node=it.first;
            int x=it.second.first,y=it.second.second;
            mp[x][y].insert(node->val);
            if(node->left!=NULL){
                Qq.push({node->left,{x-1,y+1}});
            }
            if(node->right!=NULL){
                Qq.push({node->right,{x+1,y+1}});
            }
        }
        vector<vector<int>>rett;
        for(auto it:mp){
            vector<int>temp;
            for(auto itt :it.second){
                temp.insert(temp.end(),itt.second.begin(), itt.second.end());
            }
            rett.push_back(temp);
        }
        return rett;
    }
};