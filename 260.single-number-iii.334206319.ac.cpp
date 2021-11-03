/*
 * @lc app=leetcode id=260 lang=cpp
 *
 * [260] Single Number III
 */

// @lc code=start
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int res = 0;
        int mask = 1;
        int a = 0, b = 0;
        for(auto n : nums)
            res ^= n;
        while(!(mask & res)) 
            mask <<= 1;
        for(auto n : nums){ 
            if(n & mask)
                a ^= n;
            else 
                b ^= n;
        }
        return {a,b};
    }
};
// @lc code=end
