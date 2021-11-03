/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        for(; i < s.size(); i++){
            while(true){
                if(j == t.size()) return false;
                if(s[i] == t[j]) break;
                j++;
            }
            j++;
        }
        if(i == s.size()) return true;
        return false;
    }
};
// @lc code=end
