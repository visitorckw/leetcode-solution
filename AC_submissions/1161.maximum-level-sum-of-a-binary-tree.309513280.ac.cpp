/*
 * @lc app=leetcode id=1161 lang=cpp
 *
 * [1161] Maximum Level Sum of a Binary Tree
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
    vector<int>sum;
    void dfs(TreeNode* node,unsigned int level)
    {
        if(!node)
            return;
        if(level >= sum.size())
            sum.push_back(node->val);
        else
            sum[level] += node->val;
        dfs(node->left, level+1);
        dfs(node->right, level+1);
    }
    int maxLevelSum(TreeNode* root) {
        if(!root)
            return 0;
        dfs(root,0);
        int max = sum[0];
        int max_level = 0;
        for(int i = 1; i < sum.size(); i++)
            if(sum[i] > max)
            {
                max = sum[i];
                max_level = i;
            }
        return max_level + 1;
    }
};
// @lc code=end
