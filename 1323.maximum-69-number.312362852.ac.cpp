/*
 * @lc app=leetcode id=1323 lang=cpp
 *
 * [1323] Maximum 69 Number
 */

// @lc code=start
class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '6')
            {
                s[i] = '9';
                break;
            }
        }
        return stoi(s);
    }
};
// @lc code=end
