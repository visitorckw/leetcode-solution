/*
 * @lc app=leetcode id=1048 lang=cpp
 *
 * [1048] Longest String Chain
 */

// @lc code=start
class Solution {
public:
    int ans = 0;
    bool pre(const string&str1, const string &str2){
        bool take = false;
        int i = 0, j = 0;
        while(i < str1.size() && j < str2.size()){
            if(str1[i] != str2[j]){
                if(take) return false;
                take = true;
                --i;
            }
            ++i;
            ++j;
        }
        return true;
        // return i == str1.size() && j == str2.size(); 
    }
    int longestStrChain(vector<string>& words) {
        map<int, vector<string>> table;
        for(auto str : words) table[str.size()].push_back(str);
        // for(auto x : table){
        //     cout << x.first << ' ';
        //     for(auto y : x.second){
        //         cout << y << ' ';
        //     }
        //     cout << '\n';
        // }
        unordered_map<string, int>dp;
        for(auto it : table){
            for(auto str2 : it.second){
                dp[str2] = 1;
                for(auto str1 : table[it.first-1]){
                    if(pre(str1, str2)){
                        dp[str2] = max(dp[str2], dp[str1] + 1);
                    }
                }
                ans = max(ans, dp[str2]);
            }
        }
        return ans;
    }
};
// @lc code=end
