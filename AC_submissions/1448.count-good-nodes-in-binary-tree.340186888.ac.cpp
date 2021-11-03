/*
 * @lc app=leetcode id=1448 lang=cpp
 *
 * [1448] Count Good Nodes in Binary Tree
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
    int ans = 0;
    void dfs(TreeNode *node, int maxVal){
        if(!node) return;
        if(node->val >= maxVal) ans++;
        maxVal = max(maxVal,node->val);
        dfs(node->left,maxVal);
        dfs(node->right,maxVal);
    }
    int goodNodes(TreeNode* root) {
         dfs(root,-1e9);
         return ans;
    }
};
// @lc code=end
