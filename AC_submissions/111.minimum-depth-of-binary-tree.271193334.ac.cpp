/*
 * @lc app=leetcode id=111 lang=cpp
 *
 * [111] Minimum Depth of Binary Tree
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
    int min = INT_MAX;
    void dfs(TreeNode *node,int level)
    {
        if(!node) return;
        if(!node->left && !node->right) 
        {
            if(min > level) min = level;
            return;
        }
        dfs(node->left,level+1);
        dfs(node->right,level+1);
    }
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        dfs(root,1);
        return min;
    }
};
// @lc code=end
