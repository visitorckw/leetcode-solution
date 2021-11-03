/*
 * @lc app=leetcode id=1796 lang=cpp
 *
 * [1796] Second Largest Digit in a String
 */

// @lc code=start
class Solution {
public:
    int secondHighest(string s) {
        bool exist[10] = {};
        for(auto ch : s)
            if('0' <= ch && ch <= '9')
                exist[ch-'0'] = true;
        int ctr = 0;
        for(int i = 9; i >= 0; i--){
            if(exist[i]) ++ctr;
            if(ctr >= 2) return i;
        }
        return -1;
    }
};
// @lc code=end
