/*
 * @lc app=leetcode id=817 lang=cpp
 *
 * [817] Linked List Components
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
    unordered_set<int> table;
    int numComponents(ListNode* head, vector<int>& G) {
        for(auto x : G)
            table.insert(x);
        int prev = -100;
        bool con = false;
        int ans = 0;
        while(head){
            if(table.count(head->val) and !con){
                con = true;
                ++ans;
            }
            else if(!table.count(head->val) and con)
                con = false;
            head = head->next;
        }
        return ans;
    }
};
// @lc code=end
