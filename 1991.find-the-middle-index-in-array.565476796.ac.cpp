/*
 * @lc app=leetcode id=1991 lang=cpp
 *
 * [1991] Find the Middle Index in Array
 */

// @lc code=start
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0;
        for(auto x : nums) sum += x;
        int acc = 0;
        if(sum - nums[0] == 0) return 0;
        for(int i = 1; i < nums.size(); i++) {
            acc += nums[i-1];
            // cout << "i = " << i << '\n';
            // cout << "L = " << acc << '\n';
            // cout << "R = " << sum - acc - nums[i] << '\n';
            // cout << '\n';
            if(acc == sum - acc - nums[i])
                return i;
        }
        return -1;
    }
};
// @lc code=end
