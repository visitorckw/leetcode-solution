/*
 * @lc app=leetcode id=653 lang=cpp
 *
 * [653] Two Sum IV - Input is a BST
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
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        unordered_set<int>table;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            if(table.count(k-st.top()->val))
                return true;
            else
                table.insert(st.top()->val);
            TreeNode* L = st.top()->left;
            TreeNode* R = st.top()->right;
            st.pop();
            if(L) st.push(L);
            if(R) st.push(R);
        }
        return false;
    }
};
// @lc code=end
