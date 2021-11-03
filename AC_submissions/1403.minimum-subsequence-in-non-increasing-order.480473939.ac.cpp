/*
 * @lc app=leetcode id=1403 lang=cpp
 *
 * [1403] Minimum Subsequence in Non-Increasing Order
 */

// @lc code=start
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum = 0;
        for(auto x : nums)
            sum += x;
        sort(nums.begin(), nums.end());
        vector<int>ans;
        int total = 0;
        for(int i = nums.size() - 1; i >= 0; i--){
            ans.push_back(nums[i]);
            total += nums[i];
            if(total > sum - total){
                // while(--i >= 0){
                //     int temp = total - ans.back() + nums[i];
                //     if(temp > sum - temp){
                //         ans.pop_back();
                //         ans.push_back(nums[i]);
                //     }
                //     else break;
                // }
                break;
            }
        }
        return ans;
    }
};
// @lc code=end
