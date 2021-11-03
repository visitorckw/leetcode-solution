/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        // columnNumber--;
        // if(!columnNumber) return "A";
        while(columnNumber){
            res += (char)((columnNumber-1) % 26 + 'A');
            columnNumber = (columnNumber - 1) / 26;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end
