/*
 * @lc app=leetcode id=1910 lang=cpp
 *
 * [1910] Remove All Occurrences of a Substring
 */

// @lc code=start
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int index;
        while((index = s.find(part)) != string::npos){
            // cout << s << '\n';
            // cout << "index = " << index << '\n';
            s.erase(s.begin() + index, s.begin() + index + part.size());
        }
        cout << s << '\n';
        return s;
    }
};
// @lc code=end
