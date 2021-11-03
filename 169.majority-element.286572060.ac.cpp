/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m;
        int ctr = 0;
        for(auto x : nums)
        {
            if(!ctr)
            {
                m = x;
                ctr = 1;
            }
            else if(m == x)
                ctr++;
            else
                ctr--;
        }
        return m;
    }
};
// @lc code=end
