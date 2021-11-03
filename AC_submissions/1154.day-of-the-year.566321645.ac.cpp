/*
 * @lc app=leetcode id=1154 lang=cpp
 *
 * [1154] Day of the Year
 */

// @lc code=start
class Solution {
public:
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayOfYear(string date) {
        const int year = stoi(date.substr(0, 4));
        const int month = stoi(date.substr(5, 2));
        const int day = stoi(date.substr(8, 2));
        if(!(year & 3)) days[2] = 29;
        int res = 0;
        for(int i = 1; i < month; i++)
            res += days[i];
        return res + day;
    }
};
// @lc code=end
