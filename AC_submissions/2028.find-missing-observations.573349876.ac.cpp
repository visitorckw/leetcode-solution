/*
 * @lc app=leetcode id=2028 lang=cpp
 *
 * [2028] Find Missing Observations
 */

// @lc code=start
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = mean * n;
        for(auto x : rolls)
            sum += mean - x;
        if(sum > 6 * n || sum < n) return {};
        vector<int>res(n, 1);
        sum -= n;
        for(int i = 0; i < n; i++){
            if(sum <= 0) break;
            res[i] += min(5, sum);
            sum -= 5;
        }
        return res;
    }
};
// @lc code=end
