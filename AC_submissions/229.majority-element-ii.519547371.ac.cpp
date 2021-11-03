/*
 * @lc app=leetcode id=229 lang=cpp
 *
 * [229] Majority Element II
 */

// @lc code=start
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int p1 = -1;
        int p2 = -1;
        int ctr1 = 0;
        int ctr2 = 0;
        for(auto x : nums){
            if(x == p1) ++ctr1;
            else if(x == p2) ++ctr2;
            else if(ctr1 == 0){
                p1 = x;
                ctr1 = 1;
            }
            else if(ctr2 == 0){
                p2 = x;
                ctr2 = 1;
            }
            else{
                --ctr1;
                --ctr2;
            }
        }
        int num1 = 0, num2 = 0;
        for(auto x : nums){
            if(x == p1) num1++;
            else if(x == p2) num2++;
        }
        vector<int>res;
        if(num1 > nums.size() / 3)
            res.push_back(p1);
        if(num2 > nums.size() / 3)
            res.push_back(p2);
        return res;
    }
};
// @lc code=end
