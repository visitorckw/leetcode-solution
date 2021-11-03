/*
 * @lc app=leetcode id=1315 lang=cpp
 *
 * [1315] Sum of Nodes with Even-Valued Grandparent
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
    int res = 0;
    unordered_map<TreeNode*, TreeNode*> table; // store the parent of a node
    void dfs(TreeNode* node, TreeNode* parent){
        if(!node) return;
        table[node] = parent;
        if(table[parent] && !(table[parent]->val & 1))
            res += node->val;
        dfs(node->left, node);
        dfs(node->right, node);
    }
    int sumEvenGrandparent(TreeNode* root) {
        table[NULL] = NULL;
        dfs(root, NULL);
        return res;
    }
};
// @lc code=end
