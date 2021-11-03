/*
 * @lc app=leetcode id=2044 lang=cpp
 *
 * [2044] Count Number of Maximum Bitwise-OR Subsets
 */

// @lc code=start
class Solution {
public:
    int res = 0;
    int maxor = 0;
    void dfs(int x, int num, vector<int>& nums){
        if(x >= nums.size()){
            if(num == maxor) ++res;
            return;
        }
        dfs(x+1, num, nums);
        dfs(x+1, num|nums[x], nums);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        for(auto x : nums) maxor |= x;
        dfs(0,0,nums);
        return res;
    }
};
// @lc code=end
