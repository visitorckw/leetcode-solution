/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
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
    bool ans = true;
    int dfs(TreeNode* node) {
        if(!ans)
            return 0;
        int h1 = 0, h2 = 0;
        if(node->left)
            h1 = dfs(node->left) + 1;
        if(node->right)
            h2 = dfs(node->right) + 1;
        if(abs(h1-h2) > 1) 
            ans = false;
        return h1 > h2 ? h1 : h2;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        dfs(root);
        return ans;
    }
};
// @lc code=end
