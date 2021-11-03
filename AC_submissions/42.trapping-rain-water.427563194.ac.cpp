/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()) return 0;
        int ans = 0;
        vector<int>left(height.size(), 0);
        vector<int>right(height.size(), 0);
        left[0] = height[0];
        right.back() = height.back();
        for(int i = 1; i < height.size(); ++i)
            left[i] = max(left[i-1], height[i]);
        for(int i = height.size() - 2; i >= 0; --i)
            right[i] = max(right[i+1], height[i]);
        for(int i = 0; i < height.size() - 1; ++i)
            ans += min(left[i], right[i]) - height[i];
        return ans;
    }
};
// @lc code=end
