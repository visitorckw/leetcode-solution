/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        vector<int>vec;
        while(l1){
            vec.push_back(l1->val);
            l1 = l1->next;
        }
        while(l2){
            vec.push_back(l2->val);
            l2 = l2->next;
        }
        if(vec.empty())
            return NULL;
        sort(vec.begin(),vec.end());
        ListNode* head = new ListNode;
        ListNode* now = head;
        head->val = vec[0];
        for(int i = 1; i < vec.size(); ++i){
            ListNode* temp = new ListNode;
            temp->val = vec[i];
            now->next = temp;
            now = temp;
        }
        return head;
    }
};
// @lc code=end
