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
    // Variable to store the maximum ancestor difference
    int maxval = 0;

    // Helper DFS function to compute max absolute difference for a given node's value
    void dfs1(TreeNode* root, int &maxval, int value) {
        if (!root)
            return;

        // Update maxval with the absolute difference between current node and ancestor's value
        maxval = max(maxval, abs(root->val - value));

        // Recurse for left and right children
        dfs1(root->left, maxval, value);
        dfs1(root->right, maxval, value);
    }

    // DFS traversal for all nodes to consider each node as potential ancestor
    int dfs(TreeNode* root) {
        if (!root)
            return 0;

        // Check max difference with this node as ancestor
        dfs1(root, maxval, root->val);

        // Continue DFS for left and right subtree
        dfs(root->left);
        dfs(root->right);

        return maxval; // Return the maximum difference found
    }

    // Main function to return the max difference between ancestor and descendant
    int maxAncestorDiff(TreeNode* root) {
        return dfs(root);
    }
};
