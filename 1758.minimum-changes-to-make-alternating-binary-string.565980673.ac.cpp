/*
 * @lc app=leetcode id=1758 lang=cpp
 *
 * [1758] Minimum Changes To Make Alternating Binary String
 */

// @lc code=start
class Solution {
public:
    int minOperations(string s) {
        int ctr1 = 0, ctr2 = 0;
        for(int i = 0; i < s.size(); i++){
            (s[i] - '0') == (i & 1) ? ++ctr1 : ++ctr2;
        }
        return min(ctr1, ctr2);
    }
};
// @lc code=end
