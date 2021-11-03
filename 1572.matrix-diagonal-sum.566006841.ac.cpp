/*
 * @lc app=leetcode id=1572 lang=cpp
 *
 * [1572] Matrix Diagonal Sum
 */

// @lc code=start
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        const int N = mat.size();
        int sum = 0;
        for(int i = 0; i < N; i++)
            sum += mat[i][i] + mat[i][N-i-1];
        return N & 1 ? sum - mat[N/2][N/2] : sum;
    }
};
// @lc code=end
