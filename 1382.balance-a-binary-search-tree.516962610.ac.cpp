/*
 * @lc app=leetcode id=1382 lang=cpp
 *
 * [1382] Balance a Binary Search Tree
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
    vector<int> vec;
    void dfs(TreeNode* node){
        if(!node) return;
        dfs(node->left);
        vec.push_back(node->val);
        dfs(node->right);
    }
    TreeNode* build(int L, int R){
        if(L > R) return NULL;
        if(L == R) return new TreeNode(vec[L]);
        int root = L + (R - L) / 2;
        TreeNode* node = new TreeNode(vec[root]);
        node->left = build(L, root - 1);
        node->right = build(root + 1, R);
        return node;
    }
    TreeNode* balanceBST(TreeNode* root) {
        dfs(root);
        return build(0, vec.size() - 1);
    }
};
// @lc code=end
