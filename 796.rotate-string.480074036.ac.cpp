/*
 * @lc app=leetcode id=796 lang=cpp
 *
 * [796] Rotate String
 */

// @lc code=start
class Solution {
public:
    bool rotateString(string A, string B) {
        return A.size() == B.size() and (A + A).find(B) != string::npos;
    }
};
// @lc code=end
