/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int ans = INT_MAX;
        int L = 0, sum = 0;
        for(int R = 0; R < nums.size(); R++){
            sum += nums[R];
            while(sum >= s){
                if(R - L + 1 < ans)
                    ans = R - L + 1;
                sum -= nums[L++];
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};
// @lc code=end
