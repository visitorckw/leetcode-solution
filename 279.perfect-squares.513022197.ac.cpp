/*
 * @lc app=leetcode id=279 lang=cpp
 *
 * [279] Perfect Squares
 */

// @lc code=start
class Solution {
public:
    vector<int> num;
    Solution(){
        for(int i = 1; i <= 100; i++)
            num.push_back(i * i);
    }
    int numSquares(int n) {
        int *dp = new int [n+1];
        dp[0] = 0;
        for(int i = 1; i <= n; i++){
            dp[i] = INT_MAX;
            for(auto x : num){
                if(x > i) break;
                dp[i] = min(dp[i], dp[i-x] + 1);
            }
        }
        return dp[n];
    }
};
// @lc code=end
