/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return NULL;
        while(head and head->next){
            if(head->val == head->next->val){
                ListNode* node = head->next;
                while(node and node->val == head->val)
                    node = node->next;
                head = node;
            }
            else break;
        }
        if(!head) return NULL;
        ListNode* pre = head;
        ListNode* now = head->next;
        while(now){
            if(now->next and now->next->val == now->val){
                ListNode* fast = now->next;
                while(fast){
                    if(fast->val != now->val) break;
                    fast = fast->next;
                }
                pre->next = fast;
                now = fast;
            }
            else{
                pre = now;
                now = now->next;
            }
        }
        return head;
    }
};
// @lc code=end
