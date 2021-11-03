/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(auto c : s) {
            if(isalpha(c))
                str.push_back(tolower(c));
            else if('0' <= c && c <= '9')
                str.push_back(c);
        }
        string temp = str;
        reverse(temp.begin(),temp.end());
        return str == temp;
    }
};
// @lc code=end
