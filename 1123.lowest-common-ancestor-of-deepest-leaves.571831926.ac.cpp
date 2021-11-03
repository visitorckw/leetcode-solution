/*
 * @lc app=leetcode id=1123 lang=cpp
 *
 * [1123] Lowest Common Ancestor of Deepest Leaves
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
    unordered_map<TreeNode*, int>depth;
    int dfs(TreeNode* node){
        if(!node) return 0;
        const int L = dfs(node->left) + 1;
        const int R = dfs(node->right) + 1;
        depth[node] = max(L, R);
        return max(L, R);
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(!root) return NULL;
        depth[NULL] = 0;
        dfs(root);
        while(true){
            const int L = depth[root->left];
            const int R = depth[root->right];
            if(L == R) break;
            if(L > R) root = root->left;
            else root = root->right;
        }
        return root;
    }
};
// @lc code=end
