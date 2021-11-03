/*
 * @lc app=leetcode id=124 lang=cpp
 *
 * [124] Binary Tree Maximum Path Sum
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
    int ans = INT_MIN;
    int dfs(TreeNode* node){
        if(!node) return 0;
        int L = dfs(node->left);
        int R = dfs(node->right);
        int single = max( max(L,R) , 0) + node->val;
        int dbl = max(L + R + node->val, single);
        ans = max(ans, dbl);
        return single;
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
// @lc code=end
