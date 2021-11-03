/*
 * @lc app=leetcode id=1961 lang=cpp
 *
 * [1961] Check If String Is a Prefix of Array
 */

// @lc code=start
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        const int size = s.size();
        int k = 0, len = 0;
        while(len < size){
            if(k >= words.size()) return false;
            len += words[k++].size();
        }
        if(len != size) return false;
        string str;
        for(int i = 0; i < k; i++)
            str += words[i];
        return s == str;
    }
};
// @lc code=end
