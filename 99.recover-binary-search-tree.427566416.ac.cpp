/*
 * @lc app=leetcode id=99 lang=cpp
 *
 * [99] Recover Binary Search Tree
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
    vector<TreeNode*> list;
    vector<int> arr;
    void inorder(TreeNode* node){
        if(!node) return;
        inorder(node->left);
        list.push_back(node);
        arr.push_back(node->val);
        inorder(node->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        sort(arr.begin(), arr.end());
        for(int i = 0; i < arr.size(); ++i)
            if(list[i]->val != arr[i])
                list[i]->val = arr[i];
    }
};
// @lc code=end
