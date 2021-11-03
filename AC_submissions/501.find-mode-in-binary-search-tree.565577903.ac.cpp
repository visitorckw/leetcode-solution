/*
 * @lc app=leetcode id=501 lang=cpp
 *
 * [501] Find Mode in Binary Search Tree
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
    vector<int> res;
    int times = 0;
    unordered_map<int, int> table;
    vector<int> findMode(TreeNode* root) {
        if(!root) return {};
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            table[node->val]++;
            if(node->left) st.push(node->left);
            if(node->right) st.push(node->right);
        }
        for(auto it : table){
            if(it.second > times){
                times = it.second;
                res.clear();
                res.push_back(it.first);
            }
            else if(it.second == times)
                res.push_back(it.first);
        }
        return res;
    }
};
// @lc code=end
