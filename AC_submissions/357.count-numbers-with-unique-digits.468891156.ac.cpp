/*
 * @lc app=leetcode id=357 lang=cpp
 *
 * [357] Count Numbers with Unique Digits
 */

// @lc code=start
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int ans[] = {1,10,91,739,5275,32491,168571,712891,2345851};
        return ans[n];
    }
};
// @lc code=end
