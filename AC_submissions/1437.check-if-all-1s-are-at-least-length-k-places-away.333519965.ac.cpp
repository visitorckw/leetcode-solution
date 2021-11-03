/*
 * @lc app=leetcode id=1437 lang=cpp
 *
 * [1437] Check If All 1's Are at Least Length K Places Away
 */

// @lc code=start
class Solution {
public:
    bool flag = false;
    int ctr;
    bool kLengthApart(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i]) {
                if(!flag) {
                    ctr = 0;
                    flag = true;
                }
                else{
                    if(k > ctr)
                        return false;
                    ctr = 0;
                }
            }
            else if(flag)
                ctr++;
        }
        return true;
    }
};
// @lc code=end
