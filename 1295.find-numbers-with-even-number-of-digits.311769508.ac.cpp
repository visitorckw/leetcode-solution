/*
 * @lc app=leetcode id=1295 lang=cpp
 *
 * [1295] Find Numbers with Even Number of Digits
 */

// @lc code=start
class Solution {
public:
    int ans = 0;
    int ctr;
    int findNumbers(vector<int>& nums) {
        for(auto n : nums)
        {
            ctr = 0;
            while(n)
            {
                ctr++;
                n/=10;
            }
            if(!(ctr % 2))
                ans++;
        }
        return ans;
    }
};
// @lc code=end
