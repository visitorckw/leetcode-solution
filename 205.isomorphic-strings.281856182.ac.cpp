/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
public:
    int n = 0;
    unordered_map<char,int>table1;
    unordered_map<char,int>table2;
    string s1,s2;
    bool isIsomorphic(string s, string t) {
        for(int i = 0; i < s.size(); i++)
        {
            if(table1.find(s[i]) == table1.end())
            {
                table1[s[i]] = n++;
            }
            s1.push_back(table1[s[i]]);
        }
        n = 0;
        for(int i = 0; i < t.size(); i++)
        {
            if(table2.find(t[i]) == table2.end())
            {
                table2[t[i]] = n++;
            }
            s2.push_back(table2[t[i]]);
        }
        return s1 == s2;
    }
};
// @lc code=end
