/*
 * @lc app=leetcode id=304 lang=cpp
 *
 * [304] Range Sum Query 2D - Immutable
 */

// @lc code=start
class NumMatrix {
public:
    vector<vector<int>>dp;
    NumMatrix(vector<vector<int>>& matrix) {
        dp = vector<vector<int>>(matrix.size(), vector<int>(matrix[0].size(), 0));
        dp[0][0] = matrix[0][0];
        for(int x = 1; x < matrix.size(); x++)
            dp[x][0] = dp[x-1][0] + matrix[x][0];
        for(int y = 1; y < matrix[0].size(); y++)
            dp[0][y] = dp[0][y-1] + matrix[0][y];
        for(int x = 1; x < matrix.size(); x++){
            for(int y = 1; y < matrix[0].size(); y++){
                dp[x][y] = dp[x][y-1] + dp[x-1][y] - dp[x-1][y-1] + matrix[x][y];
            }
        }
    //     cout << "DP start:\n";
    //     for(auto row : dp){
    //         for(auto x : row)
    //             cout << x << ' ';
    //         cout << '\n';
    //     }
    //     cout << "DP end\n\n";
    }
    int getDP(const int &x, const int &y){
        if(x < 0 or y < 0) return 0;
        return dp[x][y];
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        // cout << getDP(row2, col2) << ' ' << getDP(row1-1, col2-1) << ' ' << getDP(row2-1, col1-1) << ' ' <<  getDP(row1 - 1, col1 - 1) << '\n';
        return getDP(row2, col2) - getDP(row1 - 1, col2) - getDP(row2, col1 - 1) + getDP(row1 - 1, col1 - 1);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
// @lc code=end
