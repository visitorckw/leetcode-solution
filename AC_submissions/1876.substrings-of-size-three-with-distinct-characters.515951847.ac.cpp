/*
 * @lc app=leetcode id=1876 lang=cpp
 *
 * [1876] Substrings of Size Three with Distinct Characters
 */

// @lc code=start
class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size() < 3) return 0;
        int ctr = 0;
        for(int i = 0; i < s.size() - 2; i++){
            if(s[i] != s[i+1] and s[i] != s[i+2] and s[i+1] != s[i+2])
                ++ctr;
        }
        return ctr;
    }
};
// @lc code=end
