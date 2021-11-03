/*
 * @lc app=leetcode id=434 lang=cpp
 *
 * [434] Number of Segments in a String
 */

// @lc code=start
class Solution {
public:
    int countSegments(string s) {
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            if((!i or s[i-1] == ' ') and s[i] != ' ')
                ++ans;
        }
        return ans;
    }
};
// @lc code=end
