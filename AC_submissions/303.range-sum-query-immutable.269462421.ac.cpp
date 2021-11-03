/*
 * @lc app=leetcode id=303 lang=cpp
 *
 * [303] Range Sum Query - Immutable
 */

// @lc code=start
class NumArray {
public:
    vector<int>preffix;
    NumArray(vector<int>& nums) {
        if(nums.empty()) return ;
        preffix.reserve(nums.size());
        preffix.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++) preffix.push_back(preffix.back()+nums[i]);
    }
    
    int sumRange(int i, int j) {
        if(!i) return preffix[j];
        return preffix[j] - preffix[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
// @lc code=end
