/*
 * @lc app=leetcode id=572 lang=cpp
 *
 * [572] Subtree of Another Tree
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        if(!p || !q) return false;
        if(p->val != q->val) return false;
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            if(isSameTree(node, subRoot)) return true;
            if(node->left) st.push(node->left);
            if(node->right) st.push(node->right);
        }
        return false;
    }
};
// @lc code=end
