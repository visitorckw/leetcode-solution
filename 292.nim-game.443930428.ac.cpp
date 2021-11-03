/*
 * @lc app=leetcode id=292 lang=cpp
 *
 * [292] Nim Game
 */

// @lc code=start
class Solution {
public:
    bool canWinNim(int n) {
        return n & 3;
    }
};
// @lc code=end
