/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */

// @lc code=start
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>table;
        unordered_map<char,int>table2;
        for(auto ch : t)
            ++table[ch];
        int L = 0, match = 0, ans = INT_MAX;
        string ansStr;
        for(int R = 0; R < s.size(); R++){
            ++table2[s[R]];
            if(table.find(s[R]) != table.end() && table2[s[R]] == table[s[R]])
                match++;
            while(match == table.size()){
                if(R - L + 1 < ans){
                    ans = R - L + 1;
                    ansStr = s.substr(L,ans);
                }
                table2[s[L]]--;
                if(table.find(s[L]) != table.end() && table2[s[L]] < table[s[L]])
                    match--;
                ++L;
            }   
        }
        return ansStr;
    }
};
// @lc code=end
