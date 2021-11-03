/*
 * @lc app=leetcode id=1582 lang=cpp
 *
 * [1582] Special Positions in a Binary Matrix
 */

// @lc code=start
class Solution {
public:
    bool special[105][105] = {};
    int numSpecial(vector<vector<int>>& mat) {
        int ans = 0;
        for(int i = 0; i < 105; i++)
            for(int j = 0; j < 105; j++)
                special[i][j] = true;
        for(int x = 0; x < mat.size(); x++){
            for(int y = 0; y < mat[0].size(); y++){
                if(mat[x][y]){
                    for(int i = 0; i < mat.size(); i++){
                        if(i == x) continue;
                        special[i][y] = false;
                    }
                    for(int i = 0; i < mat[0].size(); i++){
                        if(i == y) continue;
                        special[x][i] = false;
                    }
                }
            }
        }
        for(int x = 0; x < mat.size(); x++)
            for(int y = 0; y < mat[0].size(); y++)
                if(mat[x][y] and special[x][y])
                    ++ans;
        return ans;
    }
};
// @lc code=end
