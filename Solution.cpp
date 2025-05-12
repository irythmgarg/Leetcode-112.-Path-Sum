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

    /**
     * Helper function to check if there exists a path from root to any leaf
     * such that the sum of values along the path equals targetSum.
     *
     * @param root - Current node being visited.
     * @param targetSum - Target value that the path should sum to.
     * @param sum - Accumulated sum from root to current node.
     * @return true if such a path exists, false otherwise.
     */
    bool hlo(TreeNode* root, int targetSum, int sum) {
        if (!root) return false;  // Base case: null node, no path

        // Check if it's a leaf node
        if (!root->left && !root->right) {
            // If the path sum including this leaf equals the target, return true
            if (sum + root->val == targetSum)
                return true;
            return false;
        }

        // Recursive call to left or right subtree. Return true if either returns true.
        if (hlo(root->left, targetSum, sum + root->val) || hlo(root->right, targetSum, sum + root->val))
            return true;

        return false;  // No valid path found in either subtree
    }

    /**
     * Main function to check if the binary tree has a root-to-leaf path
     * with a sum equal to targetSum.
     *
     * @param root - Root of the binary tree.
     * @param h - The target sum to be checked.
     * @return true if such a path exists, false otherwise.
     */
    bool hasPathSum(TreeNode* root, int h) {
        if (!root) return false;  // Edge case: empty tree
        return hlo(root, h, 0);   // Start DFS with initial sum = 0
    }
};
