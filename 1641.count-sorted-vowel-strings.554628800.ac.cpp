/*
 * @lc app=leetcode id=1641 lang=cpp
 *
 * [1641] Count Sorted Vowel Strings
 */

// @lc code=start
class Solution {
public:
    int countVowelStrings(int n) {
        // C(5+n-1, n);
        return (n+4) * (n+3) * (n+2) * (n+1) / 24;
    }
};
// @lc code=end
