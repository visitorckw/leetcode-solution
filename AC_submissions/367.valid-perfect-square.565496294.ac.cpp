/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        int L = 1, R = 46340, M;
        while(L <= R){
            M = L + (R - L) / 2;
            // cout << M << '\n';
            if(M * M < num) L = M + 1;
            else if(M * M > num) R = M - 1;
            else return true;
        }
        return false;
    }
};
// @lc code=end
