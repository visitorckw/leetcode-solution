/*
 * @lc app=leetcode id=1332 lang=cpp
 *
 * [1332] Remove Palindromic Subsequences
 */

// @lc code=start
class Solution {
public:
    int removePalindromeSub(string s) {
        const string str = s;
        reverse(s.begin(), s.end());
        if(s == str) return 1;
        return 2;
    }
};
// @lc code=end
