/*
 * @lc app=leetcode id=437 lang=cpp
 *
 * [437] Path Sum III
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
    int ans = 0;
    vector<int>parent;
    void dfs(TreeNode *node,const int &target)
    {
        if(!node)
            return ;
        int sum = 0;
        parent.push_back(node->val);
        for(int i = parent.size()-1; i >= 0; i--)
        {
            if((sum += parent[i]) == target)
                ans++;
        }
        dfs(node->left,target);
        dfs(node->right,target);
        parent.pop_back();
    }
    
    int pathSum(TreeNode* root, int sum) {
        dfs(root,sum);
        return ans;
    }
};
// @lc code=end
