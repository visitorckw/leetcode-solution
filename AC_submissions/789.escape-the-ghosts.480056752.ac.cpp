/*
 * @lc app=leetcode id=789 lang=cpp
 *
 * [789] Escape The Ghosts
 */

// @lc code=start
class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int dis = abs(target[0]) + abs(target[1]);
        for(auto cor : ghosts){
            if(abs(cor[0] - target[0]) + abs(cor[1] - target[1]) <= dis)
                return false;
        }
        return true;
    }
};
// @lc code=end
