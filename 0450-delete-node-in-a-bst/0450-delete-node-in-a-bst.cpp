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
    TreeNode* deleteNode(TreeNode* root, int key) {
        // root null
        if (root == nullptr) {
            return nullptr;
        }
        
        TreeNode* parent = nullptr;
        TreeNode* current = func(root, key, parent);
        
        // node not present
        if (current == nullptr) {
            return root;
        }
        
        // node is root
        if (parent == nullptr) {
            return funcroot(root);
        }
        
        // leaf node
        if (current->left == nullptr && current->right == nullptr) {
            if (parent->left == current) {
                parent->left = nullptr;
            } else {
                parent->right = nullptr;
            }
            delete current;
            return root;
        }
        
        // node with two children
        if (current->left != nullptr && current->right != nullptr) {
            if (parent->left == current) {
                parent->left = current->left;
            } else {
                parent->right = current->left;
            }
            TreeNode* temp = current->left;
            while (temp->right) {
                temp = temp->right;
            }
            temp->right = current->right;
            delete current;
            return root;
        }
        
        // node with only one child (left or right)
        if (current->left != nullptr) { // only left child
            if (parent->left == current) {
                parent->left = current->left;
            } else {
                parent->right = current->left;
            }
        } else { // only right child
            if (parent->left == current) {
                parent->left = current->right;
            } else {
                parent->right = current->right;
            }
        }
        delete current;
        return root;
    }

private:
    TreeNode* func(TreeNode* root, int key, TreeNode*& parent) {
        while (root != nullptr) {
            if (root->val == key) {
                return root;
            }
            parent = root;
            if (root->val > key) {
                root = root->left;
            } else {
                root = root->right;
            }
        }
        return nullptr;
    }

    TreeNode* funcroot(TreeNode* root) {
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }
        if (root->left == nullptr) {
            TreeNode* newRoot = root->right;
            delete root;
            return newRoot;
        }
        if (root->right == nullptr) {
            TreeNode* newRoot = root->left;
            delete root;
            return newRoot;
        }

        TreeNode* nextRoot = root->left;
        TreeNode* temp = nextRoot;
        while (temp->right != nullptr) {
            temp = temp->right;
        }
        temp->right = root->right;
        delete root;
        return nextRoot;
    }
};
