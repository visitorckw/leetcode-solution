/*
 * @lc app=leetcode id=513 lang=cpp
 *
 * [513] Find Bottom Left Tree Value
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
    int maxLevel = -1;
    int ans = 0;
    void dfs(TreeNode* node, const int level){
        if(!node) return;
        if(level > maxLevel){
            maxLevel = level;
            ans = node->val;
        }
        dfs(node->left, level + 1);
        dfs(node->right, level + 1);
    }
    int findBottomLeftValue(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
};
// @lc code=end
