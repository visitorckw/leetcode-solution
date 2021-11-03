/*
 * @lc app=leetcode id=530 lang=cpp
 *
 * [530] Minimum Absolute Difference in BST
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
    vector<int>vec;
    int ans = INT_MAX;
    int getMinimumDifference(TreeNode* root) {
        stack<TreeNode*>st;
        TreeNode* temp;
        st.push(root);
        while(!st.empty())
        {
            temp = st.top();
            st.pop();
            vec.push_back(temp->val);
            if(temp->left)
                st.push(temp->left);
            if(temp->right)
                st.push(temp->right);
        }
        sort(vec.begin(),vec.end());
        for(int i = 0; i < vec.size() - 1; i++)
            if(vec[i+1] - vec[i] < ans)
                ans = vec[i+1] - vec[i];
        return ans;
    }
};
// @lc code=end
