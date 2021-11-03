/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int mini = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] - mini > res)
                res = prices[i] - mini;
            // mini = min(mini, prices[i]);
            if(prices[i] < mini)
                mini = prices[i];
        }
        return res;
    }
};
// @lc code=end
