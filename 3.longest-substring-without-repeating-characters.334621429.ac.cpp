/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>table;
        int ans = 0;
        int L = 0, R = 0;
        while(R < s.size() && L < s.size()){
            while(table.count(s[R]))
                table.erase(s[L++]);
            table.insert(s[R++]);
            ans = max(ans,R-L);
        }
        return ans;
    }
};
// @lc code=end
