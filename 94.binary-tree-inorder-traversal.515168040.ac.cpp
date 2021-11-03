/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
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
    vector<int> inorderTraversal(TreeNode* root){
        vector<int>ans;
        TreeNode* node = root;
        while(node){
            if(node->left){
                TreeNode* tmp = node->left;
                while(tmp->right) tmp = tmp->right;
                tmp->right = node;
                TreeNode* del = node;
                node = node->left;
                del->left = NULL;
            }
            else{
                ans.push_back(node->val);
                node = node->right;
            }
        }
        return ans;
    }
};

// @lc code=end
