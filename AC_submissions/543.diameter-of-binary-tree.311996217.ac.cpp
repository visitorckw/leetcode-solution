/*
 * @lc app=leetcode id=543 lang=cpp
 *
 * [543] Diameter of Binary Tree
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
    int diameter = 0;
    int dfs(TreeNode *node)
    {
        if(!node)
            return -1;
        int max1 = dfs(node->left) + 1;
        int max2 = dfs(node->right) + 1;
        if(max1 + max2 > diameter)
            diameter = max1 + max2;
        return max1 > max2 ? max1 : max2;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return diameter;
    }
};
// @lc code=end
