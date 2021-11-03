/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        for(auto c : s)
            ans ^= c;
        for(auto c : t)
            ans ^= c;
        return ans;
    }
};
// @lc code=end
