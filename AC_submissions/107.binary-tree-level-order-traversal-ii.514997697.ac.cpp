/*
 * @lc app=leetcode id=107 lang=cpp
 *
 * [107] Binary Tree Level Order Traversal II
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
    unordered_map<int, vector<int>> table;
    int max_depth = 0;
    void dfs(TreeNode* node, const int depth){
        if(!node) return;
        if(depth > max_depth) max_depth = depth;
        table[depth].push_back(node->val);
        dfs(node->left, depth+1);
        dfs(node->right, depth+1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> ans;
        dfs(root, 0);
        for(int i = max_depth; i >= 0; i--)
            ans.push_back(table[i]);
        return ans;
    }
};
// @lc code=end
