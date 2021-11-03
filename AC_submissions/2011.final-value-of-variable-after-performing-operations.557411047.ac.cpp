/*
 * @lc app=leetcode id=2011 lang=cpp
 *
 * [2011] Final Value of Variable After Performing Operations
 */

// @lc code=start
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        for(auto str : operations)
            str == "++X" or str == "X++" ? res++ : res--;
        return res;
    }
};
// @lc code=end
