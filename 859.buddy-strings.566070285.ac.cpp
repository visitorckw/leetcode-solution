/*
 * @lc app=leetcode id=859 lang=cpp
 *
 * [859] Buddy Strings
 */

// @lc code=start
class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s == goal){
            bool table[26] = {};
            for(auto ch : s){
                if(table[ch-'a']) return true;
                table[ch-'a'] = true;
            }
            return false;
        }
        string s1 = s, s2 = goal;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if(s1 != s2) return false;
        
        int ctr = 0;
        for(int i = 0; i < s.size(); i++)
            if(s[i] != goal[i]) ++ctr;
        return ctr == 2;
    }
};
// @lc code=end
