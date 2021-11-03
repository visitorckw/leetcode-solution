/*
 * @lc app=leetcode id=263 lang=cpp
 *
 * [263] Ugly Number
 */

// @lc code=start
class Solution {
public:
    bool isUgly(int n) {
        if(n < 0) return false;
        while(n and !(n & 1)) n >>= 1;
        while(n and !(n % 3)) n /= 3;
        while(n and !(n % 5)) n /= 5;
        if(n == 1) return true;
        return false;
    }
};
// @lc code=end
