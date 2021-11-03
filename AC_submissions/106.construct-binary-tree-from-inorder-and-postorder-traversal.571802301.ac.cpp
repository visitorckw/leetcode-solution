/*
 * @lc app=leetcode id=106 lang=cpp
 *
 * [106] Construct Binary Tree from Inorder and Postorder Traversal
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
    int index;
    TreeNode* dfs(int L, int R,const vector<int>& postorder,const vector<int>& inorder){
        if(L > R) return NULL;
        TreeNode* node = new TreeNode(postorder[index--]);
        int split = -1;
        for(int i = L; i <= R; i++){
            if(inorder[i] == node->val){
                split = i;
                break;
            }
        }
        node->right = dfs(split + 1, R, postorder, inorder);
        node->left = dfs(L, split - 1, postorder, inorder);
        return node;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        index = postorder.size() - 1;
        return dfs(0, inorder.size() - 1, postorder, inorder);
    }
};
// @lc code=end
