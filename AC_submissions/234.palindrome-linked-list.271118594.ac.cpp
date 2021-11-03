/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int>vec;
    bool isPalindrome(ListNode* head) {
        while(head)
        {
            vec.push_back(head->val);
            head = head->next;
        }
        vector<int>temp = vec;
        reverse(temp.begin(),temp.end());
        return vec == temp;
    }
};
// @lc code=end
