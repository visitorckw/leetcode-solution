/*
 * @lc app=leetcode id=1688 lang=cpp
 *
 * [1688] Count of Matches in Tournament
 */

// @lc code=start
class Solution {
public:
    int numberOfMatches(int n) {
        if(n == 1) return 0;
        if(n & 1) return numberOfMatches((n-1)/2+1) + (n-1)/2;
        return numberOfMatches(n/2) + n/2;
    }
};
// @lc code=end
