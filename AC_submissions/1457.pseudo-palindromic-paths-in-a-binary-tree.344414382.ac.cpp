/*
 * @lc app=leetcode id=1457 lang=cpp
 *
 * [1457] Pseudo-Palindromic Paths in a Binary Tree
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
    int ans = 0;
    bool check(vector<int>&path){
        int arr[10] = {};
        for(auto n : path)
            ++arr[n];
        int odd = 0;
        for(int i = 1; i < 10; ++i){
            if(arr[i] & 1)
                ++odd;
        }
        return odd <= 1;
    }
    void dfs(vector<int>path, TreeNode* node){
        path.push_back(node->val);
        int child = 0;
        if(node->left){
            dfs(path,node->left);
            ++child;
        }
        if(node->right){
            dfs(path,node->right);
            ++child;
        }
        if(!child && check(path))
            ++ans;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        if(!root)
            return 0;
        dfs(vector<int>(),root);
        return ans;
    }
};
// @lc code=end
