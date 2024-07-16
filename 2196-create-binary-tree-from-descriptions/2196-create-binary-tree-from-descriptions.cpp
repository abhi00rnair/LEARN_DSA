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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*>mp;
        unordered_map<int,int>st;
        int n=descriptions.size();
        for(int i=0;i<n;i++){
            int parent=descriptions[i][0];
            int child=descriptions[i][1];
            if(mp.find(parent)==mp.end()){
                TreeNode*temp=new TreeNode(parent);
                mp[parent]=temp;
            }

            if(mp.find(child)==mp.end()){
                TreeNode *son=new TreeNode(child);
                mp[child]=son;
               
            }
            TreeNode*temp=mp[parent];
            TreeNode*son=mp[child];
            if(descriptions[i][2]==1){
                temp->left=son;
            }else{
                temp->right=son;
            }
            st[child]=1;
            if(st.find(parent)==st.end()){
                st[parent]=0;
            }
        }
        TreeNode*root=NULL;
        for(auto it :st){
            if(it.second==0){
                root=mp[it.first];
                break;
            }
        }
        return root;
    }
};