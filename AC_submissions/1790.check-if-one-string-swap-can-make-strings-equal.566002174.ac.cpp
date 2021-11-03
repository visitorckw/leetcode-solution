/*
 * @lc app=leetcode id=1790 lang=cpp
 *
 * [1790] Check if One String Swap Can Make Strings Equal
 */

// @lc code=start
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        int ctr1[26] = {};
        int ctr2[26] = {};
        int notequal = 0;
        const int size = s1.size();
        for(int i = 0; i < size; i++){
            ctr1[s1[i]-'a']++;
            ctr2[s2[i]-'a']++;
            if(s1[i] != s2[i]) notequal++;
        }
        if(notequal > 2) return false;
        for(int i = 0; i < 26; i++)
            if(ctr1[i] != ctr2[i])
                return false;
        return true;
    }
};
// @lc code=end
