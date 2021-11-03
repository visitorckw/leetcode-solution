/*
 * @lc app=leetcode id=114 lang=cpp
 *
 * [114] Flatten Binary Tree to Linked List
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
    void flatten(TreeNode* root) {
        if(!root) return;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            vec.push_back(node->val);
            if(node->right) st.push(node->right);
            if(node->left) st.push(node->left);
        }
        // TreeNode* res = new TreeNode(vec[0]);
        root->left = NULL;
        root->val = vec[0];
        TreeNode* now = root;
        for(int i = 1; i < vec.size(); i++){
            TreeNode* tmp = new TreeNode(vec[i]);
            now->right = tmp;
            now = tmp;
        }
    }
};
// @lc code=end
