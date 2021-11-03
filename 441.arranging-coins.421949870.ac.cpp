/*
 * @lc app=leetcode id=441 lang=cpp
 *
 * [441] Arranging Coins
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        long long int k = n;
        return (int)((-1+sqrt(1+8*k))/2);
    }
};
// @lc code=end
