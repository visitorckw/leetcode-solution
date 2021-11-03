/*
 * @lc app=leetcode id=993 lang=cpp
 *
 * [993] Cousins in Binary Tree
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
    int x_depth, y_depth;
    TreeNode *x_parent, *y_parent;
    int temp_depth;
    TreeNode *temp_parent;
    
    void dfs(TreeNode *parent, TreeNode *node, const int depth, const int &target)
    {
        if(!node)
            return;
        if(node->val == target)
        {
            temp_depth = depth;
            temp_parent = parent;
            return;
        }
        dfs(node,node->left,depth+1,target);
        dfs(node,node->right,depth+1,target);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root,root,0,x);
        x_depth = temp_depth;
        x_parent = temp_parent;
        dfs(root,root,0,y);
        y_depth = temp_depth;
        y_parent = temp_parent;
        return x_depth == y_depth && x_parent != y_parent;
    }
};
// @lc code=end
