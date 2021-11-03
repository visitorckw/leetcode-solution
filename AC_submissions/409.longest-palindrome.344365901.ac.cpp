/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */

// @lc code=start
class Solution {
public:
    int ctr[256] = {};
    bool flag = false;
    int ans = 0;
    int longestPalindrome(string s) {
        for(auto ch : s)
            ++ctr[ch];
        for(int i = 0; i < 256; ++i){
            ans += ((ctr[i] >> 1) << 1);
            if(ctr[i] & 1)
                flag = true;
        }
        if(flag) ++ans;
        return ans;
    }
};
// @lc code=end
