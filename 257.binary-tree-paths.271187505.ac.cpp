/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
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
    vector<string>ans;
    void dfs(string s,TreeNode *node)
    {
        s = s + to_string(node->val);
        if(!node->left && !node->right)
        {
            ans.push_back(s);
        }
        s = s + "->";
        if(node->left) dfs(s,node->left);
        if(node->right) dfs(s,node->right);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root) return ans;
        dfs("",root);
        return ans;
    }
};
// @lc code=end
