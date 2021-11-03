/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        if(!strs.size()) return ans;
        int length=1e9;
        for(int i = 0; i < strs.size(); i++){
            if(length > strs[i].size()) length = strs[i].size();
        }
        int p = 0;
        for(; p < length; p++){
            for(int i = 1; i < strs.size(); i++){
                if(strs[i][p] != strs[0][p]) return ans;
            }
            ans.push_back(strs[0][p]);
        }
        return ans;
    }
};
// @lc code=end
