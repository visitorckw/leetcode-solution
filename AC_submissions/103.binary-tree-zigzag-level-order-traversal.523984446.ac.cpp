/*
 * @lc app=leetcode id=103 lang=cpp
 *
 * [103] Binary Tree Zigzag Level Order Traversal
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return vector<vector<int>>();
        vector<vector<int>> res;
        queue<pair<TreeNode*, int>>que;
        pair<TreeNode*, int> node;
        que.push(make_pair(root, 0));
        while(!que.empty()){
            node = que.front();
            que.pop();
            if(node.second == res.size())
                res.push_back(vector<int>());
            res[node.second].push_back(node.first->val);
            if(node.first->left)
                que.push(make_pair(node.first->left, node.second+1));
            if(node.first->right)
                que.push(make_pair(node.first->right, node.second+1));
        }
        for(int i = 1; i < res.size(); i += 2)
            reverse(res[i].begin(), res[i].end());
        return res;
    }
};
// @lc code=end
