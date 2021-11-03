/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        int p = 0;
        int pre = 0;
        int far = 0;
        int ans = 0;
        while(far < nums.size() - 1){
            pre = far;
            ++ans;
            while(p <= pre){
                far = max(p+nums[p], far);
                p++;
            }
            if(far >= nums.size() - 1)
                return ans;
        }
        return ans;
    }
};
// @lc code=end
