/*
 * @lc app=leetcode id=1957 lang=cpp
 *
 * [1957] Delete Characters to Make Fancy String
 */

// @lc code=start
class Solution {
public:
    string makeFancyString(string s) {
        string res;
        char prev = '+';
        int ctr = 1;
        for(auto ch : s){
            if(ch == prev){
                ++ctr;
                if(ctr >= 3) continue;
                else res += ch;
            }
            else{
                ctr = 1;
                prev = ch;
                res += ch;
            }
        }
        return res;
    }
};
// @lc code=end
