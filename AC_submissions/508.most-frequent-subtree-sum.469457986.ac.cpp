/*
 * @lc app=leetcode id=508 lang=cpp
 *
 * [508] Most Frequent Subtree Sum
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
    unordered_map<int, int> table;
    int dfs(TreeNode* node){
        if(!node) return 0;
        int ans = node->val + dfs(node->left) + dfs(node->right);
        table[ans]++;
        // cout << ans << '\n';
        return ans;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        int freq = -1;
        vector<int> ans;
        for(auto it : table){
            if(it.second > freq){
                freq = it.second;
                ans.clear();
                ans.push_back(it.first);
            }
            else if(it.second == freq)
                ans.push_back(it.first);
        }
        return ans;
    }
};
// @lc code=end
