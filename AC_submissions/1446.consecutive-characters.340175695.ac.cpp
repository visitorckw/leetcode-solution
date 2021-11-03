/*
 * @lc app=leetcode id=1446 lang=cpp
 *
 * [1446] Consecutive Characters
 */

// @lc code=start
class Solution {
public:
    int maxPower(string s) {
        if(s.empty())
            return 0;
        if(s.size() == 1)
            return 1;
        char ch = s[0];
        int ctr = 1;
        int ans = 0;
        for(int i = 1; i < s.size(); i++){
            if(s[i] == ch)
                ctr++;
            else{
                ch = s[i];
                ans = max(ans, ctr);
                ctr = 1;
            }
        }
        ans = max(ctr,ans);
        return ans;
    }
};
// @lc code=end
