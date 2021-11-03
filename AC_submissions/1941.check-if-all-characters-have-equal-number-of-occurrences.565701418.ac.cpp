/*
 * @lc app=leetcode id=1941 lang=cpp
 *
 * [1941] Check if All Characters Have Equal Number of Occurrences
 */

// @lc code=start
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int ctr[26] = {};
        for(auto ch : s)
            ctr[ch-'a']++;
        int rec = 0;
        for(int i = 0; i < 26; i++){
            if(!ctr[i]) continue;
            else if(!rec) rec = ctr[i];
            else if(rec != ctr[i]) return false;
        }
        return true;
    }
};
// @lc code=end
