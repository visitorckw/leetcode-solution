/*
 * @lc app=leetcode id=1217 lang=cpp
 *
 * [1217] Minimum Cost to Move Chips to The Same Position
 */

// @lc code=start
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd = 0;
        int even = 0;
        for(auto x : position)
            x & 1 ? odd++ : even++;
        return odd < even ? odd : even;
    }
};
// @lc code=end
