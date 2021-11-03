/*
 * @lc app=leetcode id=1475 lang=cpp
 *
 * [1475] Final Prices With a Special Discount in a Shop
 */

// @lc code=start
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans(prices.begin(), prices.end());
        for(int i = 0; i < prices.size(); i++){
            for(int j = i + 1; j < prices.size(); j++){
                if(prices[j] <= prices[i]){
                    ans[i] -= prices[j];
                    break;
                }
            }
        }
        return  ans;
    }
};
// @lc code=end
