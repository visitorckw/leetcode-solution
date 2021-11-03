/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int ctr = 0;
        for(auto ch : s){
            if(!ctr){
                ctr = 1;
                continue;
            }
            if(ch == '('){
                ctr++;
                res += ch;
            }
            else{
                ctr--;
                if(!ctr) continue;
                res += ch;
            }
        }
        return res;
    }
};
// @lc code=end
