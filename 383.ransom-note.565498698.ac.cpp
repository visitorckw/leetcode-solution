/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int num[26] = {};
        for(auto ch : magazine)
            num[ch - 'a']++;
        for(auto ch : ransomNote)
            if(--num[ch-'a'] < 0)
                return false;
        return true;
    }
};
// @lc code=end
