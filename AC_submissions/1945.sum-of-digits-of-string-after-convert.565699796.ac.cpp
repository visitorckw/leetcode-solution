/*
 * @lc app=leetcode id=1945 lang=cpp
 *
 * [1945] Sum of Digits of String After Convert
 */

// @lc code=start
class Solution {
public:
    int getLucky(string s, int k) {
        int res = 0;
        for(auto ch : s){
            int x = ch - 'a' + 1;
            res += x / 10 + x % 10;
        }
        k--;
        while(k--){
            int x = res;
            res = 0;
            while(x){
                res += x % 10;
                x /= 10;
            }
        }
        return res;
    }
};
// @lc code=end
