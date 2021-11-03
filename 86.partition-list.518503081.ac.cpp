/*
 * @lc app=leetcode id=86 lang=cpp
 *
 * [86] Partition List
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
    ListNode* frontH = NULL;
    ListNode* frontT = NULL;
    ListNode* endH = NULL;
    ListNode* endT = NULL;
    void insert(bool which, const int &x){
        if(which){
            if(!frontH) frontH = frontT = new ListNode(x);
            else{
                frontT->next = new ListNode(x);
                frontT = frontT->next;
            }
        }
        else{
            if(!endH) endH = endT = new ListNode(x);
            else{
                endT->next = new ListNode(x);
                endT = endT->next;
            }
        }
    }
    ListNode* partition(ListNode* head, int x) {
        ListNode* now = head;
        while(now){
            insert(now->val < x, now->val);
            now = now->next;
        }
        if(frontT) frontT->next = endH;
        if(frontH) return frontH;
        return endH;
    }
};
// @lc code=end
