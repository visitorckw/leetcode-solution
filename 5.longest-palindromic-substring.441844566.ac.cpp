/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string sol;
    void recursive(const string &s, int i, int j){
        // if(i < 0 or j >= s.size()) return;
        // if(s[i] != s[j]) return;
        while(i >= 0 and j < s.size() and s[i] == s[j]){
            if(j-i+1 > sol.size()) sol = s.substr(i,j-i+1);
            --i;
            ++j;
        }
        // if(j-i+1 > sol.size()) sol = s.substr(i,j-i+1);
        // recursive(s,i-1,j+1);
    }
    string longestPalindrome(string s) {
        for(int i = 0; i < s.size(); i++){
            recursive(s,i,i);
            recursive(s,i,i+1);
        }
        return sol;
    }
};
// @lc code=end
