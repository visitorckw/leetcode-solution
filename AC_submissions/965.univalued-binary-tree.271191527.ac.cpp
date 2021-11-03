/*
 * @lc app=leetcode id=965 lang=cpp
 *
 * [965] Univalued Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int value;
    TreeNode *node;
    bool isUnivalTree(TreeNode* root) {
        value = root->val;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
            node = st.top();
            st.pop();
            if(!node) continue;
            if(node->val != value) return false;
            st.push(node->left);
            st.push(node->right);
        }
        return true;
    }
};
// @lc code=end
