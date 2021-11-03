/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        long int rev = 0;
        while(x)
        {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        if(rev < INT_MIN) return 0;
        if(rev > INT_MAX) return 0;
        return rev;
    }
};
// @lc code=end
