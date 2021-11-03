/*
 * @lc app=leetcode id=2022 lang=cpp
 *
 * [2022] Convert 1D Array Into 2D Array
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(original.size() != m * n) return {};
        vector<vector<int>>res(m, vector<int>(n, 0));
        for(int i = 0; i < original.size(); i++){
            res[i/n][i%n] = original[i];
        }
        return res;
    }
};
// @lc code=end
