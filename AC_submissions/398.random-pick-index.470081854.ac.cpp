/*
 * @lc app=leetcode id=398 lang=cpp
 *
 * [398] Random Pick Index
 */

// @lc code=start
class Solution {
public:
    vector<int>*ptr;
    Solution(vector<int>& nums) {
        ptr = &nums;
    }
    
    int pick(int target) {
        vector<int>wait;
        for(int i = 0; i < ptr->size(); i++)
            if((*ptr)[i] == target)
                wait.push_back(i);
        return wait[rand() % wait.size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
// @lc code=end
