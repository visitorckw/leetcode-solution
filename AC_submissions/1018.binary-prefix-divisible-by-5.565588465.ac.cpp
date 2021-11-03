/*
 * @lc app=leetcode id=1018 lang=cpp
 *
 * [1018] Binary Prefix Divisible By 5
 */

// @lc code=start
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> res(nums.size());
        int num = 0;
        int p = 0;
        for(auto x : nums){
            num <<= 1;
            num += x;
            res[p++] = !(num % 5);
            num %= 5;
        }
        return res;
    }
};
// @lc code=end
