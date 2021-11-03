/*
 * @lc app=leetcode id=1903 lang=cpp
 *
 * [1903] Largest Odd Number in String
 */

// @lc code=start
class Solution {
public:
    string largestOddNumber(string num) {
        while(!num.empty() and !((num.back() - '0') & 1))
            num.pop_back();
        return num;
    }
};
// @lc code=end
