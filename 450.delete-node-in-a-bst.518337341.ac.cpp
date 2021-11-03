/*
 * @lc app=leetcode id=450 lang=cpp
 *
 * [450] Delete Node in a BST
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
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* res = root;
        TreeNode* parent = NULL;
        bool left = true;
        while(root){
            if(root->val == key){
                if(!root->left and !root->right){
                    if(parent){
                        if(left) parent->left = NULL;
                        else parent->right = NULL;
                    }
                    else return NULL;
                    delete root;
                }
                else if(!root->left){
                    if(!parent) return root->right;
                    if(left) parent->left = root->right;
                    else parent->right = root->right;
                    delete root;
                }
                else if(!root->right){
                    if(!parent) return root->left;
                    if(left) parent->left = root->left;
                    else parent->right = root->left;
                    delete root;
                }
                else{
                    TreeNode* pre = NULL;
                    TreeNode* change = root->left;
                    while(change->right){
                        pre = change;
                        change = change->right;
                    }
                    root->val = change->val;
                    if(pre) pre->right = change->left;
                    else root->left = change->left;
                }
                break;
            }
            else if(root->val > key){
                parent = root;
                left = true;
                root = root->left;
            }
            else{
                parent = root;
                left = false;
                root = root->right;
            }
        }
        return res;
    }
};
// @lc code=end
