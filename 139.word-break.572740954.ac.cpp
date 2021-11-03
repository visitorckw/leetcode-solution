/*
 * @lc app=leetcode id=139 lang=cpp
 *
 * [139] Word Break
 */

// @lc code=start
class Solution {
public:
    unordered_set<string>st;
    bool wordBreak(string s, vector<string>& wordDict) {
        for(auto str : wordDict) st.insert(str);
        vector<bool>dp(s.size() + 1, false);
        dp[0] = true;
        for(int i = 1; i <= s.size(); i++){
            for(int j = 0; j < i; j++){
                if(!dp[j]) continue;
                string str = s.substr(j, i - j);
                if(st.count(str)){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[s.size()];
    }
};
// @lc code=end
