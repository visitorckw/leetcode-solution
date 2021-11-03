/*
 * @lc app=leetcode id=1022 lang=cpp
 *
 * [1022] Sum of Root To Leaf Binary Numbers
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
    void dfs(TreeNode* node, int val){
        val <<= 1;
        val |= node->val;
        if(!node->left and !node->right){
            ans += val;
            return;
        }
        if(node->left) dfs(node->left, val);
        if(node->right) dfs(node->right, val);
    }
    int sumRootToLeaf(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
};
// @lc code=end
