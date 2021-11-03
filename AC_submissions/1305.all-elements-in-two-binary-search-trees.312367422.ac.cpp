/*
 * @lc app=leetcode id=1305 lang=cpp
 *
 * [1305] All Elements in Two Binary Search Trees
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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>vec;
        TreeNode* node;
        stack<TreeNode*>st;
        if(root1)
            st.push(root1);
        while(!st.empty())
        {
            node = st.top();
            st.pop();
            vec.push_back(node->val);
            if(node->left)
                st.push(node->left);
            if(node->right)
                st.push(node->right);
        }
        if(root2)
            st.push(root2);
        while(!st.empty())
        {
            node = st.top();
            st.pop();
            vec.push_back(node->val);
            if(node->left)
                st.push(node->left);
            if(node->right)
                st.push(node->right);
        }
        sort(vec.begin(),vec.end());
        return vec;
    }
};
// @lc code=end
