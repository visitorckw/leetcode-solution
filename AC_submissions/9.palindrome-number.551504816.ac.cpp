/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(!x) return true;
        if(x < 0 or !(x % 10)) return false;
        int y = 0;
        while(x > y){
            y *= 10;
            y += x % 10;
            x /= 10;
        }
        return x == y or x == y / 10;
    }
};
// @lc code=end
