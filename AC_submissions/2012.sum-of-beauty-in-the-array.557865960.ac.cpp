/*
 * @lc app=leetcode id=2012 lang=cpp
 *
 * [2012] Sum of Beauty in the Array
 */

// @lc code=start
class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int res = 0;
        
        vector<int>intermin(nums.size());
        vector<int>intermax(nums.size());
        intermax[0] = nums[0];
        intermin[intermin.size()-1] = nums[nums.size()-1];
        for(int i = 1; i < nums.size(); i++)
            intermax[i] = max(nums[i], intermax[i-1]);
        for(int i = nums.size() - 2; i >= 0; i--)
            intermin[i] = min(nums[i], intermin[i+1]);
        
        for(int i = 1; i <= nums.size() - 2; i++){
            if(intermax[i-1] < nums[i] && nums[i] < intermin[i+1])
                res += 2;
            else if(nums[i-1] < nums[i] && nums[i] < nums[i+1])
                ++res;
        }
        return res;
    }
};
// @lc code=end
