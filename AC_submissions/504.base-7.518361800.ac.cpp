/*
 * @lc app=leetcode id=504 lang=cpp
 *
 * [504] Base 7
 */

// @lc code=start
class Solution {
public:
    string convertToBase7(int num) {
        if(!num) return "0";
        bool positive = true;
        if(num < 0){
            positive = false;
            num = -num;
        }
        string res;
        while(num){
            res += num % 7 + '0';
            num /= 7;
        }
        if(!positive) res += '-';
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end
