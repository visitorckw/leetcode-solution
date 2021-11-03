/*
 * @lc app=leetcode id=814 lang=cpp
 *
 * [814] Binary Tree Pruning
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
    bool dfs(TreeNode *node)//if pruning return true
    {
        if(!node) return true;
        if(!node->left && !node->right) return !(node->val);
        bool L,R;
        L = dfs(node->left);
        if(L) node->left = NULL;
        R = dfs(node->right);
        if(R) node->right = NULL;
        if(L && R && !(node->val)) return true;
        return false;
    }
    TreeNode* pruneTree(TreeNode* root) {
        dfs(root);
        return root;
    }
};
// @lc code=end
