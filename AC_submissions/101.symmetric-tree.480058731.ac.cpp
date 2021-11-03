/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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
    bool f(TreeNode* L, TreeNode* R){
        if(!L and !R) return true;
        if(!L or !R) return false;
        return L->val == R->val and f(L->left, R->right) and f(L->right, R->left);
    }
    bool isSymmetric(TreeNode* root) {
           return f(root, root);
    }
};
// @lc code=end
