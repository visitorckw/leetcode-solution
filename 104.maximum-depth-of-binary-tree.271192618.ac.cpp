/*
 * @lc app=leetcode id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
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
    int max = 0;
    void dfs(TreeNode *node,const int level)
    {
        if(!node) return;
        if(level > max) max = level;
        dfs(node->left,level+1);
        dfs(node->right,level+1);
    }
    int maxDepth(TreeNode* root) {
        dfs(root,1);
        return max;
    }
};
// @lc code=end
