/*
 * @lc app=leetcode id=557 lang=cpp
 *
 * [557] Reverse Words in a String III
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        //if(s == " ") return "";
        int i,j;
        
        for(i = 0, j = 0; i < s.size() && j < s.size(); j++)
        {
            if(s[j] == ' ')
            {
                reverse(s.begin()+i,s.begin()+j);
                j++;
                i = j;
            }
        }
        reverse(s.begin()+i,s.end());
        return s;
    }
};
// @lc code=end
