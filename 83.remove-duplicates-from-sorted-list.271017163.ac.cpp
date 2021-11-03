/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode* ans = head;
        ListNode* p = head->next;
        while(p)
        {
            if(head->val == p->val) head->next = p->next;
            else head = p;
            p = p->next;
        }
        return ans;
    }
};
// @lc code=end
