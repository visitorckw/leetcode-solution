/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = NULL;
        ListNode *p = head;
        ListNode *temp;
        while(p)
        {
            temp = p->next;
            p->next = pre;
            pre = p;
            p = temp;
        }
        return pre;
    }
};
// @lc code=end
