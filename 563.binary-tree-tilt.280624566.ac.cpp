/*
 * @lc app=leetcode id=563 lang=cpp
 *
 * [563] Binary Tree Tilt
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
    int sum = 0;
    
    int dfs(TreeNode *node)//return sum
    {
        if(!node)
            return 0;
        const int left = dfs(node->left);
        const int right = dfs(node->right);
        sum += abs(left - right);
        return left + right + node->val;
    }
    int findTilt(TreeNode* root) {
        dfs(root);
        return sum;
    }
};
// @lc code=end
