/*
 * @lc app=leetcode id=1736 lang=cpp
 *
 * [1736] Latest Time by Replacing Hidden Digits
 */

// @lc code=start
class Solution {
public:
    string maximumTime(string time) {
        if(time[4] == '?') time[4] = '9';
        if(time[3] == '?') time[3] = '5';
        if(time[1] == '?')
            time[1] = (time[0] == '?' || time[0] == '2' ? '3' : '9');
        if(time[0] == '?')
            time[0] = (time[1] <= '3' ? '2' : '1');
        return time;
    }
};
// @lc code=end
