/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(root==NULL){
            return false;
        }
        if(func(root,head)){
            return true;
        }
        return isSubPath(head,root->left)|| isSubPath(head,root->right);
    }

    bool func(TreeNode*root, ListNode*tp){
        if(tp==NULL){
            return true;
        }
        if(root==NULL){
            return false;
        }
        if(tp->val !=root->val){
            return false;
        }
        return (func(root->left,tp->next)|| func(root->right,tp->next));
    }
};