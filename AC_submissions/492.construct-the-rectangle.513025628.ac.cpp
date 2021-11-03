/*
 * @lc app=leetcode id=492 lang=cpp
 *
 * [492] Construct the Rectangle
 */

// @lc code=start
class Solution {
public:
    vector<int> constructRectangle(int area) {
        int mini = INT_MAX;
        vector<int>ans;
        for(int i = 1; i <= sqrt(area) + 1e-7; i++){
            if(!(area % i) and abs(i-area/i) < mini){
                mini = abs(i-area/i);
                if(i > area / i) ans = {i, area / i};
                else ans = {area / i, i};
            }
        }
        return ans;
    }
};
// @lc code=end
