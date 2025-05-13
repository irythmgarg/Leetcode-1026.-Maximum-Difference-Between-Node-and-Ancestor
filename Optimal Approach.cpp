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
    // Variable to store the maximum difference between ancestor and descendant
    int maxdiff = 0;

    // DFS function to update maxdiff while traversing tree
    void dfs(TreeNode* root, int maxval, int minval) {
        if (!root)
            return;

        // Update current max and min values on the path
        maxval = max(maxval, root->val);
        minval = min(minval, root->val);

        // Update the global maximum difference
        maxdiff = max(maxdiff, abs(maxval - minval));

        // Recur for left and right subtrees
        dfs(root->left, maxval, minval);
        dfs(root->right, maxval, minval);

        return;
    }

    // Main function to start DFS traversal and return the result
    int maxAncestorDiff(TreeNode* root) {
        int maxval = -1000000;  // Initialize with a very small value
        int minval =  1000000;  // Initialize with a very large value

        dfs(root, maxval, minval); // Start DFS from root

        return maxdiff; // Return the maximum ancestor-descendant difference
    }
};
