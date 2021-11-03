/*
 * @lc app=leetcode id=1725 lang=cpp
 *
 * [1725] Number Of Rectangles That Can Form The Largest Square
 */

// @lc code=start
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxLen = -1;
        int ctr = 0;
        for(auto rect : rectangles){
            const int len = min(rect[0], rect[1]);
            if(len > maxLen){
                maxLen = len;
                ctr = 1;
            }
            else if(len == maxLen)
                ++ctr;
        }
        return ctr;
    }
};
// @lc code=end
