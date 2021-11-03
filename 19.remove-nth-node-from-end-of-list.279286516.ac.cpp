/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    vector<ListNode*>vec;
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        /*if(!head)
            return head;*/
        ListNode *ans = head;
        while(head)
        {
            vec.push_back(head);
            head = head->next;
        }
        //remove vec[vec.size()-n];
        if(vec.size() == n)
            return ans->next;
        vec[vec.size()-n-1]->next = vec[vec.size()-n]->next;
        return ans;
    }
};
// @lc code=end
