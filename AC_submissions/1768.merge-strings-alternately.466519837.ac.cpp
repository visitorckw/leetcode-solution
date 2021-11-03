/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int size = min(word1.size(), word2.size());
        for(int i = 0; i < size; i++){
            ans += word1[i];
            ans += word2[i];
        }
        for(int i = size; i < word1.size(); i++)
            ans += word1[i];
        for(int i = size; i < word2.size(); i++)
            ans += word2[i];
        return ans;
    }
};
// @lc code=end
