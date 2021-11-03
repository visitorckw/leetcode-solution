/*
 * @lc app=leetcode id=1678 lang=cpp
 *
 * [1678] Goal Parser Interpretation
 */

// @lc code=start
class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i = 0; i < command.size(); i++){
            if(command[i] == 'G')
                ans += "G";
            else if(command[i] == ')'){
                if(command[i-1] == '(')
                    ans += "o";
                else
                    ans += "al";
            }
        }
        return ans;
    }
};
// @lc code=end
