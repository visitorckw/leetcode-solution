/*
 * @lc app=leetcode id=1716 lang=cpp
 *
 * [1716] Calculate Money in Leetcode Bank
 */

// @lc code=start
class Solution {
public:
    int totalMoney(int n) {
        int Q = n / 7;
        int R = n % 7;
        int res = 28 * Q;
        res += Q * (Q - 1) / 2 * 7;
        res += (Q+1 + Q+R) * R / 2;
        return res;
    }
};
// @lc code=end
