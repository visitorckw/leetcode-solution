/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
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
    ListNode* removeElements(ListNode* head, int val) {
        while(head)
        {
            if(head->val == val) head = head->next;
            else break;
        }
        if(!head || !head->next) return head;
        ListNode *cur = head->next, *pre = head;
        while(cur)
        {
            if(cur->val == val)
            {
                pre->next = cur->next;
                cur = pre->next;
            }
            else
            {
                pre = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};
// @lc code=end
