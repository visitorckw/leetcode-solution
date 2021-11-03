/*
 * @lc app=leetcode id=171 lang=cpp
 *
 * [171] Excel Sheet Column Number
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(auto ch : columnTitle){
            ans *= 26;
            ans += ch - 'A' + 1;
        }
        return ans;
    }
};
// @lc code=end
