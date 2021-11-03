/*
 * @lc app=leetcode id=1400 lang=cpp
 *
 * [1400] Construct K Palindrome Strings
 */

// @lc code=start
class Solution {
public:
    int ctr[26] = {};
    bool canConstruct(string s, int k) {
        if(k > s.size()) return false;
        for(auto ch : s)
            ctr[ch-'a']++;
        int least = 0;
        for(int i = 0; i < 26; i++)
            if(ctr[i] & 1) least++;
        return least <= k;
    }
};
// @lc code=end
