/*
 * @lc app=leetcode id=1189 lang=cpp
 *
 * [1189] Maximum Number of Balloons
 */

// @lc code=start
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int res = 0;
        int ctr[26] = {};
        for(auto ch : text) ctr[ch-'a']++;
        while(ctr[0] && ctr[1] && ctr['n'-'a'] && ctr['l'-'a'] >= 2 && ctr['o'-'a'] >= 2){
            ++res;
            ctr[0]--;
            ctr[1]--;
            ctr['n'-'a']--;
            ctr['l'-'a'] -= 2;
            ctr['o'-'a'] -= 2;
        }
        return res;
    }
};
// @lc code=end
