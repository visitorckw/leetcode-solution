/*
 * @lc app=leetcode id=1374 lang=cpp
 *
 * [1374] Generate a String With Characters That Have Odd Counts
 */

// @lc code=start
class Solution {
public:
    string generateTheString(int n) {
        string s(n,'a');
        if(n % 2)
            return s;
        s[0] = 'b';
        return s;
        
    }
};
// @lc code=end
