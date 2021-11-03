/*
 * @lc app=leetcode id=1071 lang=cpp
 *
 * [1071] Greatest Common Divisor of Strings
 */

// @lc code=start
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 != str2 + str1) return "";
        if(str1 == str2) return str1;
        if(str1.empty()) return str2;
        if(str2.empty()) return str1;
        if(str2.size() > str1.size()) swap(str1, str2);
        int pos = str1.find(str2);
        if(pos == 0){
            str1.erase(str1.begin(), str1.begin() + str2.size());
            return gcdOfStrings(str1, str2);
        }
        return "";
    }
};
// @lc code=end
