/*
 * @lc app=leetcode id=1556 lang=cpp
 *
 * [1556] Thousand Separator
 */

// @lc code=start
class Solution {
public:
    string thousandSeparator(int n) {
        string res;
        const string s = to_string(n);
        int ctr = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            res += s[i];
            ctr++;
            if(ctr == 3){
                ctr = 0;
                res += '.';
            }
        }
        if(res.back() == '.') res.pop_back();
        reverse(res.begin(), res.end());
        if(res.back() == '.') res.pop_back();
        return res;
    }
};
// @lc code=end
