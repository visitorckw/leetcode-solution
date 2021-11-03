/*
 * @lc app=leetcode id=1732 lang=cpp
 *
 * [1732] Find the Highest Altitude
 */

// @lc code=start
class Solution {
public:
    int ans = 0;
    int alt = 0;
    int largestAltitude(vector<int>& gain) {
        for(auto x : gain){
            alt += x;
            ans = max(ans, alt);
        }
        return ans;
    }
};
// @lc code=end
