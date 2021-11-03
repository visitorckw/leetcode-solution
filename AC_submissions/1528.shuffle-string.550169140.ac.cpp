/*
 * @lc app=leetcode id=1528 lang=cpp
 *
 * [1528] Shuffle String
 */

// @lc code=start
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res(s.size(), '0');
        for(int i = 0; i < indices.size(); i++){
            res[indices[i]] = s[i];
        }
        return res;
    }
};
// @lc code=end
