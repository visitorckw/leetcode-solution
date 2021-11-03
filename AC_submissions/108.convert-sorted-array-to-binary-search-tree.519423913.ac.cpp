/*
 * @lc app=leetcode id=108 lang=cpp
 *
 * [108] Convert Sorted Array to Binary Search Tree
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
    TreeNode* dfs(int L, int R, vector<int>&nums){
        if(L > R) return NULL;
        const int m = L + (R - L) / 2;
        TreeNode* node = new TreeNode(nums[m]);
        node->left = dfs(L, m-1, nums);
        node->right = dfs(m+1, R, nums);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return dfs(0, nums.size()-1, nums);
    }
};
// @lc code=end
