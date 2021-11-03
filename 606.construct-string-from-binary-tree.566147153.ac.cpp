/*
 * @lc app=leetcode id=606 lang=cpp
 *
 * [606] Construct String from Binary Tree
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
    string tree2str(TreeNode* root) {
        if(!root) return "";
        string res = to_string(root->val);
        const string L = tree2str(root->left);
        const string R = tree2str(root->right);
        if(!root->left && root->right)
            return res + "()(" + R + ")";
        if(root->left) res += "(" + L + ")";
        if(root->right) res += "(" + R + ")";
        return res;
    }
};
// @lc code=end
