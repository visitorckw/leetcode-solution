/*
 * @lc app=leetcode id=1614 lang=cpp
 *
 * [1614] Maximum Nesting Depth of the Parentheses
 */

// @lc code=start
class Solution {
public:
    int maxDepth(string s) {
        int res = 0;
        int now = 0;
        for(auto ch : s){
            if(ch == '(')
                res = max(res, ++now);
            else if(ch == ')')
                --now;
        }
        return res;
    }
};
// @lc code=end
