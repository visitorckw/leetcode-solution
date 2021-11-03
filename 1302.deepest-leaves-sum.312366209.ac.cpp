/*
 * @lc app=leetcode id=1302 lang=cpp
 *
 * [1302] Deepest Leaves Sum
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int max_depth = 0;
    int sum = 0;
    void dfs(TreeNode* node, const int depth)
    {
        if(depth > max_depth)
        {
            max_depth = depth;
            sum = node->val;
        }
        else if(depth == max_depth)
            sum += node->val;
        if(node->left)
            dfs(node->left, depth+1);
        if(node->right)
            dfs(node->right, depth+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        dfs(root, 0);
        return sum;
    }
};
// @lc code=end
