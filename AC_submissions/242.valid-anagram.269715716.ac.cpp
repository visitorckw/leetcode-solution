/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    int ctr[26];
    void sorting(string &s)
    {
        memset(ctr,0,sizeof(ctr));
        for(auto c:s) ctr[c-'a']++;
        int p = 0;
        for(int i = 0; i < 26; i++)
        {
            for(int j = 0; j < ctr[i]; j++)
            {
                s[p] = 'a' + i;
                p++;
            }
        }
    }
    bool isAnagram(string s, string t) {
        sorting(s);
        sorting(t);
        return s == t;
    }
};
// @lc code=end
