/*
 * @lc app=leetcode id=1431 lang=cpp
 *
 * [1431] Kids With the Greatest Number of Candies
 */

// @lc code=start
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = INT_MIN;
        for(auto x : candies)
            if(x > max)
                max = x;
        vector<bool>ans(candies.size());
        for(int i = 0; i < candies.size(); i++)
            ans[i] = candies[i] + extraCandies >= max;
        return ans;
    }
};
// @lc code=end
