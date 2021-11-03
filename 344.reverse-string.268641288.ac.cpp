/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size() < 2) return;
        reverse(s.begin(),s.end());
    }
};
// @lc code=end
