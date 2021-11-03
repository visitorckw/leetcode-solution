/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    unordered_map<char,int> table;
    int firstUniqChar(string s) {
        for(auto c : s)
            table[c]++;
        for(int i = 0; i < s.size(); i++)
            if(table[s[i]] == 1)
                return i;
        return -1;
    }
};
// @lc code=end
