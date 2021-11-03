/*
 * @lc app=leetcode id=654 lang=cpp
 *
 * [654] Maximum Binary Tree
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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.empty())
            return NULL;
        if(nums.size() == 1){
            TreeNode* node = new TreeNode;
            node->val = nums[0];
            return node;
        } 
        int max = INT_MIN;
        int index = -1;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] > max){
                max = nums[i];
                index = i;
            }
        }
        TreeNode* node = new TreeNode;
        node->val = max;
        if(index - 1 >= 0){
            vector<int> L(nums.begin(),nums.begin()+index);
            node->left = constructMaximumBinaryTree(L);
        }
        if(index + 1 <= nums.size() - 1){
            vector<int> R(nums.begin() + index + 1,nums.end());
            node->right = constructMaximumBinaryTree(R);
        }
        return node;
    }
};
// @lc code=end
