/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
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
    unordered_set<ListNode*> visit;
    ListNode *detectCycle(ListNode *head) {
        while(head){
            visit.insert(head);
            if(visit.count(head->next))
                return head->next;
            head = head->next;
        }
        return NULL;
    }
};
// @lc code=end
