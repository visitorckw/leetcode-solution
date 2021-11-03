/*
 * @lc app=leetcode id=637 lang=cpp
 *
 * [637] Average of Levels in Binary Tree
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
    vector<long long int>sum;
    vector<int>quantity;
    vector<double>ans;
    void dfs(TreeNode *node, int level)
    {
        if(!node) return;
        if(level == sum.size())
        {
            sum.push_back(node->val);
            quantity.push_back(1);
        }
        else
        {
            sum[level] += node->val;
            quantity[level]++;
        }
        dfs(node->left,level+1);
        dfs(node->right,level+1);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        dfs(root,0);
        for(int i = 0; i < sum.size(); i++)
            ans.push_back(sum[i]*1.0/quantity[i]);
        return ans;
    }
};
// @lc code=end
