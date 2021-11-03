/*
 * @lc app=leetcode id=1624 lang=cpp
 *
 * [1624] Largest Substring Between Two Equal Characters
 */

// @lc code=start
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int res = -1;
        unordered_map<char, int> table;
        for(auto i = 0; i < s.size(); i++){
            const auto it = table.find(s[i]);
            if(it == table.end()){
                table[s[i]] = i;
                continue;
            }
            res = max(res, i - it->second - 1);
        }
        return res;
    }
};
// @lc code=end
