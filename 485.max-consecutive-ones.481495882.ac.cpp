/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        bool ing = false;
        int ctr = 0;
        int ans = 0;
        for(auto x : nums){
            if(x){
                if(ing) ++ctr;
                else{
                    ing = true;
                    ctr = 1;
                }
                ans = max(ans, ctr);
            }
            else{
                ans = max(ans, ctr);
                ctr = 0;
                ing = false;
            }
        }
        return ans;
    }
};
// @lc code=end
