/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int diff = INT_MAX;
        for(int i = 0; i < nums.size() - 2; i++){
            int L = i + 1;
            int R = nums.size() - 1;
            while(L < R){
                int sum = nums[i] + nums[L] + nums[R];
                if(abs(sum - target) < diff){
                    ans = sum;
                    diff = abs(sum - target);
                }
                if(sum > target) R--;
                else L++;
            }
        }
        return ans;
    }
};
// @lc code=end
