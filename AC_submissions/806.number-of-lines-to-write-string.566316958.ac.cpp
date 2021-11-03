/*
 * @lc app=leetcode id=806 lang=cpp
 *
 * [806] Number of Lines To Write String
 */

// @lc code=start
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int>res(2, 0);
        int lines = 1;
        int pixels = 0;
        for(auto ch : s){
            if(pixels + widths[ch-'a'] > 100){
                lines++;
                pixels = widths[ch-'a'];
            }
            else pixels += widths[ch-'a'];
        }
        res[0] = lines;
        res[1] = pixels;
        return res;
    }
};
// @lc code=end
