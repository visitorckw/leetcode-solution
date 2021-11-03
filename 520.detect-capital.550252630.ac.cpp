/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        bool findLower = false;
        for(char ch : word){
            if('a' <= ch and ch <= 'z'){
                findLower = true;
                break;
            }
        }
        if(!findLower) return true;
        bool findUpper = false;
        for(char ch : word){
            if('A' <= ch and ch <= 'Z'){
                findUpper = true;
                break;
            }
        }
        if(!findUpper) return true;
        if('a' <= word[0] and word[0] <= 'z') return false;
        for(int i = 1; i < word.size(); i++)
            if('A' <= word[i] and word[i] <= 'Z')
                return false;
        return true;
    }
};
// @lc code=end
