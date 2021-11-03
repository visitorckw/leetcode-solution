/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
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
    vector<vector<int>>ans;
    void dfs(TreeNode *node,int level)
    {
        if(!node) return;
        if(level == ans.size()) ans.push_back(vector<int>{node->val});
        else ans[level].push_back(node->val);
        dfs(node->left,level+1);
        dfs(node->right,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};
// @lc code=end
