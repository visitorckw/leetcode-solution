/*
 * @lc app=leetcode id=1752 lang=cpp
 *
 * [1752] Check if Array Is Sorted and Rotated
 */

// @lc code=start
class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums.size() <= 1) return true;
        if(is_sorted(nums.begin(), nums.end())) return true;
        vector<int>vec(1, nums[0]);
        for(int i = 1; i < nums.size(); i++)
            if(nums[i] != nums[i-1])
                vec.push_back(nums[i]);
        int index;
        for(int i = 1; i < vec.size(); i++){
            if(vec[i] < vec[i-1]){
                index = i;
                break;
            }
        }
        return nums.back() <= nums.front() && is_sorted(vec.begin(), vec.begin() + index) && is_sorted(vec.begin() + index, vec.end());
    }
};
// @lc code=end
