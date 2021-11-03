/*
 * @lc app=leetcode id=95 lang=cpp
 *
 * [95] Unique Binary Search Trees II
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
    map<pair<int,int>, vector<TreeNode*>> mp;
    vector<TreeNode*>dfs(int L, int R){
        if(L > R) return {NULL};
        if(mp.count(make_pair(L, R))) return mp[make_pair(L, R)];
        vector<TreeNode*>res;
        for(int i = L; i <= R; i++){
            TreeNode* node = new TreeNode(i);
            vector<TreeNode*> LL = dfs(L, i - 1);
            vector<TreeNode*> RR = dfs(i + 1, R);
            for(int x = 0; x < LL.size(); x++){
                for(int y = 0; y < RR.size(); y++){
                    TreeNode* node = new TreeNode(i);
                    node->left = LL[x];
                    node->right = RR[y];
                    res.push_back(node);
                }
            }
        }
        return mp[make_pair(L, R)] = res;
    }
    vector<TreeNode*> generateTrees(int n) {
        return dfs(1, n);
    }
};
// @lc code=end
