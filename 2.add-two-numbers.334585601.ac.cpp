/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode;
        ListNode *now = head;
        bool add = false;
        int sum;
        if(l1 || l2){
            sum = (l1?l1->val:0) + (l2?l2->val:0) + add;
            if(sum > 9){
                add = true;
                sum %= 10;
            }
            else add = false;
            head->val = sum;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        while(l1 || l2){
            sum = (l1?l1->val:0) + (l2?l2->val:0) + add;
            if(sum > 9){
                add = true;
                sum %= 10;
            }
            else add = false;
            ListNode *temp = new ListNode;
            temp->val = sum;
            now->next = temp;
            now = temp;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(add){
            ListNode *temp = new ListNode;
            temp->val = 1;
            now->next = temp;
        }
        return head;
    }
};
// @lc code=end
