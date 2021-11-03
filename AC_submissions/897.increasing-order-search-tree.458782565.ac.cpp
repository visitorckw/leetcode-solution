/*
 * @lc app=leetcode id=897 lang=cpp
 *
 * [897] Increasing Order Search Tree
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
    vector<int>vec;
    void dfs(TreeNode* node){
        if(!node) return;
        dfs(node->left);
        vec.push_back(node->val);
        dfs(node->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        dfs(root);
        TreeNode* ans = new TreeNode;
        TreeNode* temp;
        TreeNode* last;
        ans->val = vec[0];
        last = ans;
        for(int i = 1; i < vec.size(); i++){
            temp = new TreeNode;
            temp->val = vec[i];
            last->right = temp;
            last = temp;
        }
        return ans;
    }
};
// @lc code=end
