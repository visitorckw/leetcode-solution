/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "") return 0;
        for(int i = 0; i < haystack.size(); i++)
        {
            for(int j = 0; j < needle.size(); j++)
            {
                if(haystack[i+j] != needle[j]) break;
                if(j == needle.size()-1) return i;
            }
        }
        return -1;
    }
};
// @lc code=end
