class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        while (root) {
            if (!root->left) {
                // If no left child, visit this node and move right
                ans.push_back(root->val);
                root = root->right;
            } else {
                // Find inorder predecessor (rightmost node in left subtree)
                TreeNode* current = root->left;
                while (current->right && current->right != root) {
                    current = current->right;
                }

                if (!current->right) {
                    // Create temporary link to root
                    current->right = root;
                    root = root->left;
                } else {
                    // Thread already exists -> break it
                    current->right = NULL;
                    ans.push_back(root->val);
                    root = root->right;
                }
            }
        }
        return ans;
    }
};
