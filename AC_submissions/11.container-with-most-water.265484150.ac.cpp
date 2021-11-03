/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int min(int &x,int &y)
    {
        return x > y ? y : x;
    }
    int maxArea(vector<int>& height) {
        int max = -1;
        int contain;
        for(int i = 1; i < height.size(); i++) {
            for(int j = 0; j < i; j++) {
                contain = (i-j)*min(height[i],height[j]);
                if(contain > max) max = contain;
            }
        }
        return max;
    }
};
// @lc code=end
