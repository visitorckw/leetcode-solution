/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
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
    int index = 0;
    TreeNode* dfs(int L, int R,const vector<int>& preorder,const vector<int>& inorder){
        if(L > R) return NULL;
        TreeNode* node = new TreeNode(preorder[index++]);
        int split = -1;
        for(int i = L; i <= R; i++){
            if(inorder[i] == node->val){
                split = i;
                break;
            }
        }
        node->left = dfs(L, split - 1, preorder, inorder);
        node->right = dfs(split + 1, R, preorder, inorder);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return dfs(0, preorder.size() - 1, preorder, inorder);
    }
};
// @lc code=end
