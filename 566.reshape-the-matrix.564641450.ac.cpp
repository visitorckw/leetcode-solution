/*
 * @lc app=leetcode id=566 lang=cpp
 *
 * [566] Reshape the Matrix
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        const int m = mat.size();
        const int n = mat[0].size();
        if(m*n != r*c) return mat;
        vector<vector<int>>res(r, vector<int>(c, 0));
        int now = 0;
        for(auto v : mat){
            for(auto x : v){
                res[now/c][now%c] = x;
                ++now;
            }
        }
        return res;
    }
};
// @lc code=end
