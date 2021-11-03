/*
 * @lc app=leetcode id=109 lang=cpp
 *
 * [109] Convert Sorted List to Binary Search Tree
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    vector<int>vec;
    TreeNode* dfs(int L, int R){
        if(L > R) return NULL;
        if(L == R){
            TreeNode* node = new TreeNode(vec[L]);
            return node;
        }
        int index = (L + R) / 2;
        TreeNode* node = new TreeNode(vec[index]);
        node->left = dfs(L, index - 1);
        node->right = dfs(index+1, R);
        return node;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        while(head){
            vec.push_back(head->val);
            head = head->next;
        }
        return dfs(0, vec.size()-1);
    }
};
// @lc code=end
