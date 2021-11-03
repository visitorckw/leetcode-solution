/*
 * @lc app=leetcode id=515 lang=cpp
 *
 * [515] Find Largest Value in Each Tree Row
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
    vector<int>ans;
    void dfs(TreeNode* node, const int level){
        if(!node) return;
        if(level >= ans.size()) ans.push_back(node->val);
        else if(node->val > ans[level]) ans[level] = node->val;
        dfs(node->left,level+1);
        dfs(node->right,level+1);
    }
    vector<int> largestValues(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};
// @lc code=end
