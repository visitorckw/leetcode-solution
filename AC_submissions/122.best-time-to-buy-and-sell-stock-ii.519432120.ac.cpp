/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const int size = prices.size();
        int low = prices[0];
        int high = prices[0];
        int i = 0;
        int res = 0;
        while(i < size - 1){
            while(i < size - 1 and prices[i] >= prices[i+1]) ++i;
            low = prices[i];
            while(i < size - 1 and prices[i] <= prices[i+1]) ++i;
            high = prices[i];
            res += high - low;
        }
        return res;
    }
};
// @lc code=end
