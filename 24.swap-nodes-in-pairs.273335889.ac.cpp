/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
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
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp;
        ListNode *ans = head;
        while(head)
        {
            temp = head->next;
            if(!temp) return ans;
            swap(head->val, temp->val);
            head = temp->next;
        }
        return ans;
    }
};
// @lc code=end
