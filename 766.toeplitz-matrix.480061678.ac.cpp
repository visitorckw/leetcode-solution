/*
 * @lc app=leetcode id=766 lang=cpp
 *
 * [766] Toeplitz Matrix
 */

// @lc code=start
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); i++){
            int start_x = i;
            int start_y = 0;
            int val = matrix[start_x][start_y];
            int x = start_x + 1, y = start_y + 1;
            while(x < matrix.size() and y < matrix[0].size()){
                if(matrix[x][y] != val)
                    return false;
                x++;
                y++;
            }
        }
        for(int i = 0; i < matrix[0].size(); i++){
            int start_x = 0;
            int start_y = i;
            int val = matrix[start_x][start_y];
            int x = start_x + 1, y = start_y + 1;
            while(x < matrix.size() and y < matrix[0].size()){
                if(matrix[x][y] != val)
                    return false;
                x++;
                y++;
            }
        }
        return true;
    }
};
// @lc code=end
