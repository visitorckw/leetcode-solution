/*
 * @lc app=leetcode id=830 lang=cpp
 *
 * [830] Positions of Large Groups
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>res;
        char prev = '\0';
        int ctr = 1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == prev) ++ctr;
            else{
                if(ctr >= 3) res.push_back({i-ctr,i-1});
                prev = s[i];
                ctr = 1;
            }
        }
        if(ctr >= 3) res.push_back({(int)s.size()-ctr,(int)s.size()-1});
        return res;
    }
};
// @lc code=end
