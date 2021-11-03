/*
 * @lc app=leetcode id=384 lang=cpp
 *
 * [384] Shuffle an Array
 */

// @lc code=start
class Solution {
public:
    vector<int>* ptr;
    Solution(vector<int>& nums) {
        ptr = &nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return *ptr;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> ans = *ptr;
        random_shuffle(ans.begin(), ans.end());
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
// @lc code=end
