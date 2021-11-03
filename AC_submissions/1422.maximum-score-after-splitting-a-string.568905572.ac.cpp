/*
 * @lc app=leetcode id=1422 lang=cpp
 *
 * [1422] Maximum Score After Splitting a String
 */

// @lc code=start
class Solution {
public:
    int maxScore(string s) {
        int res = 0;
        int L = 0;
        int R = 0;
        if(s.front() == '0') L = 1;
        for(int i = 1; i < s.size(); i++)
            if(s[i] == '1') ++R;
        res = max(res, L + R);
        for(int i = 1; i < s.size() - 1; i++){
            L += (s[i] == '0' ? 1 : 0);
            R -= (s[i] == '1' ? 1 : 0);
            res = max(res, L + R);
        }
        return res;
    }
};
// @lc code=end
