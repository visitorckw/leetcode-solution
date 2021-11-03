/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
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
    bool isValidBST(TreeNode* root) {
        vec.clear();
        dfs(root);
        for(int i = 0; i < vec.size() - 1; i++){
            if(vec[i] >= vec[i+1])
                return false;
        }
        return true;
    }
};
// @lc code=end
