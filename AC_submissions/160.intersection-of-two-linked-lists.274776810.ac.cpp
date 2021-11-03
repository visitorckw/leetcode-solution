/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
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
    unordered_set<ListNode*>table;
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        while(headA)
        {
            table.insert(headA);
            headA = headA->next;
        }
        while(headB)
        {
            if(table.find(headB) != table.end())
                return headB;
            headB = headB->next;
        }
        return NULL;
    }
};
// @lc code=end
