/*
 * @lc app=leetcode id=173 lang=cpp
 *
 * [173] Binary Search Tree Iterator
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
class BSTIterator {
public:
    multiset<int> tree;
    multiset<int>::iterator it;
    void dfs(TreeNode* node){
        if(!node) return;
        tree.insert(node->val);
        dfs(node->left);
        dfs(node->right);
    }
    BSTIterator(TreeNode* root) {
        dfs(root);
        it = tree.begin();
    }
    
    int next() {
        int res = *it;
        it++;
        return res;
    }
    
    bool hasNext() {
        return it != tree.end();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
// @lc code=end
