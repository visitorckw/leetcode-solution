/*
 * @lc app=leetcode id=396 lang=cpp
 *
 * [396] Rotate Function
 */

// @lc code=start
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        const int N = nums.size();
        int res = 0, total = 0;
        int sum;
        for(int i = 0; i < N; i++) total += nums[i];
        for(int i = 0; i < N; i++) res += i * nums[i];
        sum = res;
        for(int i = 0; i < N - 1; i++){
            sum -= (N-1) * nums[N-1-i];
            sum += total - nums[N-i-1];
            res = max(res, sum);
        }
        return res;
    }
};
// @lc code=end
