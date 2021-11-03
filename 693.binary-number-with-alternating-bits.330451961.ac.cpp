/*
 * @lc app=leetcode id=693 lang=cpp
 *
 * [693] Binary Number with Alternating Bits
 */

// @lc code=start
class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool cur = n & 1;
        n >>= 1;
        while(n) {
            if((n & 1) == cur)
                return false;
            cur = !cur;
            n >>= 1;
        }
        return true;
    }
};
// @lc code=end
