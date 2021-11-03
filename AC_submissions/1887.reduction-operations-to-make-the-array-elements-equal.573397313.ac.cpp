/*
 * @lc app=leetcode id=1887 lang=cpp
 *
 * [1887] Reduction Operations to Make the Array Elements Equal
 */

// @lc code=start
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int high = nums.back();
        int res = 0;
        for(int i = nums.size() - 1; i >= 0; i--){
            if(nums[i] == high) continue;
            res += nums.size() - 1 - i;
            high = nums[i];
        }
        return res;
    }
};
// @lc code=end
