/*
 * @lc app=leetcode id=671 lang=cpp
 *
 * [671] Second Minimum Node In a Binary Tree
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
    int smallest;
    int second = -1;
    bool flag = false;
    void dfs(TreeNode* node)
    {
        if(!node) return ;
        if(node->val == smallest)
        {
            dfs(node->left);
            dfs(node->right);
            return ;
        }
        if(!flag)
        {
            second = node->val;
            flag = true;
            return ;
        }
        if(node->val < second)
            second = node->val;
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        if(!root)
            return -1;
        smallest = root->val;
        dfs(root);
        return second;
    }
};
// @lc code=end
