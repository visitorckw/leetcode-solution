/*
 * @lc app=leetcode id=744 lang=cpp
 *
 * [744] Find Smallest Letter Greater Than Target
 */

// @lc code=start
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char res;
        int mini = 100;
        for(auto ch : letters){
            int x = ch - target;
            if( x <= 0)
                x += 26;
            if( x < mini){
                mini = x;
                res = ch;
            }
        }
        return res;
    }
};
// @lc code=end
