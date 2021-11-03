/*
 * @lc app=leetcode id=1979 lang=cpp
 *
 * [1979] Find Greatest Common Divisor of Array
 */

// @lc code=start
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int big = INT_MIN;
        int small = INT_MAX;
        for(auto x : nums){
            big = max(big, x);
            small = min(small, x);
        }
        return gcd(big, small);
    }
};
// @lc code=end
