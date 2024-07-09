/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.

string serialize(TreeNode* root) {
    if (root == nullptr) {
        return "";
    }
    queue<TreeNode*> que;
    que.push(root);
    string s;
    char a = 'n';  
    while (!que.empty()) {
        TreeNode* temp = que.front();
        que.pop();

        if (temp == nullptr) {
            s += a;
            s += ','; 
        } else {
            s += to_string(temp->val) + ',';
            que.push(temp->left);
            que.push(temp->right);
        }
    }
    return s;
}
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0){
            return NULL;
        }

    stringstream ss(data);
    string item;
    getline(ss, item, ',');
    TreeNode* root = new TreeNode(stoi(item));
    queue<TreeNode*> que;
    que.push(root);

    while (!que.empty()) {
        TreeNode* current = que.front();
        que.pop();

        if (getline(ss, item, ',')) {
            if (item == "n") {
                current->left = nullptr;
            } else {
                current->left = new TreeNode(stoi(item));
                que.push(current->left);
            }
        }

        if (getline(ss, item, ',')) {
            if (item == "n") {
                current->right = nullptr;
            } else {
                current->right = new TreeNode(stoi(item));
                que.push(current->right);
            }
        }
    }

    return root;
}
     
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));