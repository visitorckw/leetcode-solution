/*
 * @lc app=leetcode id=1523 lang=cpp
 *
 * [1523] Count Odd Numbers in an Interval Range
 */

// @lc code=start
class Solution {
public:
    int countOdds(int low, int high) {
        if(!(high&1)) high--;
        if(!(low&1)) low++;
        if(low > high) return 0;
        return ((high - low) >> 1) + 1;
    }
};
// @lc code=end
