/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
                if(root==NULL){
            return NULL;
        }
        queue<Node*>qq;
        qq.push(root);
        while(!qq.empty()){
            int n=qq.size();
            for(int i=0;i<n-1;i++){
                Node*tp=qq.front();
                qq.pop();
                tp->next=qq.front();
                if(tp->left!=NULL){
                    qq.push(tp->left);
                }
                if(tp->right!=NULL){
                    qq.push(tp->right);
                }
            }
            if(qq.front()->left!=NULL){
                qq.push(qq.front()->left);
            }
            if(qq.front()->right!=NULL){
                qq.push(qq.front()->right);
            }
            qq.front()->next=NULL;
            qq.pop();

        }
        return root;
    }
};