/*
 * @lc app=leetcode id=1314 lang=cpp
 *
 * [1314] Matrix Block Sum
 */

// @lc code=start
class Solution {
public:
    int maxX, maxY;
    bool valid(const int &x, const int &y){
        if(x < 0 or y < 0 or x >= maxX or y >= maxY) return false;
        return true;
    }
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
        maxX = mat.size();
        maxY = mat[0].size();
        vector<vector<int>> ans = mat;
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                ans[i][j] = 0;
                for(int x = i - K; x <= i + K; x++){
                    for(int y = j - K; y <= j + K; y++){
                        if(!valid(x,y)) continue;
                        ans[i][j] += mat[x][y];
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end
