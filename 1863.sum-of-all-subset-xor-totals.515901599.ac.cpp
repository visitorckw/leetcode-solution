/*
 * @lc app=leetcode id=1863 lang=cpp
 *
 * [1863] Sum of All Subset XOR Totals
 */

// @lc code=start
class Solution {
public:
    int ans = 0;
    void dfs(const int dim, int num, vector<int>&nums){
        if(dim >= nums.size()){
            ans += num;
            return;
        }
        dfs(dim+1, num, nums);
        dfs(dim+1, num^nums[dim], nums);
    }
    int subsetXORSum(vector<int>& nums) {
        dfs(0, 0, nums);
        return ans;
    }
};
// @lc code=end
