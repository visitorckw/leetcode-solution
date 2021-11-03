/*
 * @lc app=leetcode id=148 lang=cpp
 *
 * [148] Sort List
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
    ListNode* sortList(ListNode* head) {
        vector<int> vec;
        ListNode* p = head;
        while(p){
            vec.push_back(p->val);
            p = p->next;
        }
        sort(vec.begin(),vec.end());
        p = head;
        for(auto n : vec){
            p->val = n;
            p = p->next;
        }
        return head;
    }
};
// @lc code=end
