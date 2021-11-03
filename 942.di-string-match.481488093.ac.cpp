/*
 * @lc app=leetcode id=942 lang=cpp
 *
 * [942] DI String Match
 */

// @lc code=start
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int L = 0;
        int R = s.size();
        vector<int> ans(s.size() + 1);
        int p = 0;
        for(auto ch : s){
            if(ch == 'I') ans[p++] = L++;
            else ans[p++] = R--;
        }
        ans[p] = L;
        return ans;
    }
};
// @lc code=end
