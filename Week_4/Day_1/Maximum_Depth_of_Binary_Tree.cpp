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
    int maxDepth(TreeNode* root) {

        // Base case
        if(root == nullptr){
            return 0;
        }

        // Depth of left subtree
        int leftDepth = maxDepth(root->left);

        // Depth of right subtree
        int rightDepth = maxDepth(root->right);

        // Current depth
        return 1 + max(leftDepth, rightDepth);
    }
};
