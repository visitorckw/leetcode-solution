/*
 * @lc app=leetcode id=1379 lang=cpp
 *
 * [1379] Find a Corresponding Node of a Binary Tree in a Clone of That Tree
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
    TreeNode* dfs(TreeNode* n,const int &t){
        if(!n) return NULL;
        if(n->val == t) return n;
        return (TreeNode*)((unsigned long)dfs(n->left,t) ^ (unsigned long)dfs(n->right,t));
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return dfs(cloned, target->val);
    }
};
// @lc code=end
