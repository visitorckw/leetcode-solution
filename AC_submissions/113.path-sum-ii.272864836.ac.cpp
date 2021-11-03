/*
 * @lc app=leetcode id=113 lang=cpp
 *
 * [113] Path Sum II
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
    vector<vector<int>>ans;
    int target;
    void dfs(TreeNode *root,int sum,vector<int>path)
    {
        if(!root) return;
        path.push_back(root->val);
        sum += root->val;
        if(!root->left && !root->right)
        {
            if(sum == target) ans.push_back(path);
            return;
        }
        dfs(root->left,sum,path);
        dfs(root->right,sum,path);
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        target = sum;
        dfs(root,0,{});
        return ans;
    }
};
// @lc code=end
