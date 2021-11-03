/*
 * @lc app=leetcode id=1704 lang=cpp
 *
 * [1704] Determine if String Halves Are Alike
 */

// @lc code=start
class Solution {
public:
    unordered_set<char> table;
    bool halvesAreAlike(string s) {
        table.insert('a');
        table.insert('e');
        table.insert('i');
        table.insert('o');
        table.insert('u');
        table.insert('A');
        table.insert('E');
        table.insert('I');
        table.insert('O');
        table.insert('U');
        int len = s.size() / 2;
        int ctrL = 0;
        int ctrR = 0;
        for(int i = 0; i < len; i++){
            if(table.count(s[i])) ctrL++;
        }
        for(int i = len; i < s.size(); i++){
            if(table.count(s[i])) ctrR++;
        }
        return ctrL == ctrR;
    }
};
// @lc code=end
