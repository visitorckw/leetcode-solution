/*
 * @lc app=leetcode id=921 lang=cpp
 *
 * [921] Minimum Add to Make Parentheses Valid
 */

// @lc code=start
class Solution {
public:
    int minAddToMakeValid(string s) {
        int left = 0, res = 0;
        for(auto ch : s){
            if(ch == '(') left++;
            else if(left > 0) left--;
            else res++;
        }
        return res + left;
    }
};
// @lc code=end
