/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
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
    int target;
    bool dfs(TreeNode *root, int sum)
    {
        if(!root) return false;
        sum += root->val;
        if(!root->left && !root->right)
        {
            if(target == sum) return true;
            return false;
        }
        return dfs(root->left,sum) || dfs(root->right,sum);
    }
    bool hasPathSum(TreeNode* root, int sum) {
        target = sum;
        return dfs(root,0);
    }
};
// @lc code=end
