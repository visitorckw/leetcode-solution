/*
 * @lc app=leetcode id=938 lang=cpp
 *
 * [938] Range Sum of BST
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
    int rangeSumBST(TreeNode* root, int low, int high) {
        dfs(root);
        int ans = 0;
        for(auto x : vec){
            if(x > high)
                return ans;
            if(x >= low)
                ans += x;
        }
        return ans;
    }
};
// @lc code=end
