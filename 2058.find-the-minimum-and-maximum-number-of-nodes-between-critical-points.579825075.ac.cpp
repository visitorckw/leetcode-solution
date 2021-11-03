/*
 * @lc app=leetcode id=2058 lang=cpp
 *
 * [2058] Find the Minimum and Maximum Number of Nodes Between Critical Points
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>vec;
        vector<int>point;
        while(head){
            vec.push_back(head->val);
            head = head->next;
        }
        for(int i = 1; i < vec.size() - 1; i++){
            if((vec[i-1] < vec[i] && vec[i+1] < vec[i]) || (vec[i-1] > vec[i] && vec[i+1] > vec[i])){
                point.push_back(i);
            }
        }
        if(point.size() < 2) return {-1, -1};
        vector<int>res(2);
        res[0] = INT_MAX;
        res[1] = point.back() - point.front();
        for(int i = 0; i < point.size() - 1; i++)
            res[0] = min(res[0], point[i+1] - point[i]);
        return res;
    }
};
// @lc code=end
