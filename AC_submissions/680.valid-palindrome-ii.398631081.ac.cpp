/*
 * @lc app=leetcode id=680 lang=cpp
 *
 * [680] Valid Palindrome II
 */

// @lc code=start
class Solution {
public:
    bool validPalindrome(string s) {
        string str = s;
        reverse(str.begin(),str.end());
        if(s == str)
            return true;
        for(int i = 0; i <= (s.size() >> 1); ++i){
            if(s[i] != s[s.size()-i-1]){
                str = s;
                str.erase(str.begin() + i);
                string temp = str;
                reverse(temp.begin(),temp.end());
                if(str == temp)
                    return true;
                str = s;
                str.erase(str.begin() + s.size() -1 - i);
                temp = str;
                reverse(temp.begin(),temp.end());
                if(str == temp)
                    return true;
                
                return false;
            }
        }
        return false;
    }
};
// @lc code=end
