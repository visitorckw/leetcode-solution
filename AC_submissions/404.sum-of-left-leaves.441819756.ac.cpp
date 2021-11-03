/*
 * @lc app=leetcode id=404 lang=cpp
 *
 * [404] Sum of Left Leaves
 */

// @lc code=start
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
    int res = 0;
    void dfs(TreeNode* node, const bool &left){
        if(!node) return;
        if(!node->left && !node->right && left){
            res += node->val;
            return;
        }
        dfs(node->left, true);
        dfs(node->right, false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root, false);
        return res;
    }
};
// @lc code=end
