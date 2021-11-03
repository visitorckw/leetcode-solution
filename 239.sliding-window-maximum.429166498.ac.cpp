/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
 */

// @lc code=start
class Solution {
public:
    multiset<int>tree;
    vector<int>ans;
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        for(int i = 0; i < k; i++)
            tree.insert(nums[i]);
        ans.push_back(*tree.rbegin());
        for(int i = k; i < nums.size(); i++){
            tree.insert(nums[i]);
            tree.erase(tree.find(nums[i-k]));
            ans.push_back(*tree.rbegin());
        }
        return ans;
    }
};
// @lc code=end
