/*
 * @lc app=leetcode id=1935 lang=cpp
 *
 * [1935] Maximum Number of Words You Can Type
 */

// @lc code=start
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool broken[26] = {};
        for(auto ch : brokenLetters)
            broken[ch-'a'] = true;
        int ctr = 0;
        bool flag = true;
        for(auto ch : text){
            if(ch == ' '){
                ctr += flag;
                flag = true;
            }
            else if(broken[ch-'a']) flag = false;
        }
        ctr += flag;
        return ctr;
    }
};
// @lc code=end
