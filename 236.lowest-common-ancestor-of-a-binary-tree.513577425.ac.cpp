/*
 * @lc app=leetcode id=236 lang=cpp
 *
 * [236] Lowest Common Ancestor of a Binary Tree
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
    unordered_map<TreeNode*, int>tin; //node:time in
    unordered_map<TreeNode*, int>tout; //node:time out
    unordered_map<TreeNode*, int>high; //node:height
    int t = 0;
    void dfs(TreeNode* node,const int h){
        if(!node) return;
        tin[node] = t++;
        high[node] = h;
        dfs(node->left, h+1);
        dfs(node->right, h+1);
        tout[node] = t++;
    }
    int max_h = INT_MIN;
    TreeNode* ans = NULL;
    void find(TreeNode* node, TreeNode* p, TreeNode* q){
        if(!node) return;
        if(tin[node] <= tin[p] and tout[node] >= tout[p] and tin[node] <= tin[q] and tout[node] >= tout[q]){
            if(high[node] > max_h){
                max_h = high[node];
                ans = node;
            }
        }
        find(node->left, p, q);
        find(node->right, p ,q);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        dfs(root,0);
        find(root,p,q);
        // cout << tin[p] << ' ' << tout[p] << '\n';
        // cout << tin[q] << ' ' << tout[q] << '\n';
        return ans;
    }
};
// @lc code=end
