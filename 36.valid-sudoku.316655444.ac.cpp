/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool row[9][9];
    bool col[9][9];
    bool s[3][3][9];
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.') {
                    if(row[i][board[i][j] - '1'] || col[j][board[i][j] - '1'] || s[i/3][j/3][board[i][j] - '1'])
                        return false;
                    row[i][board[i][j] - '1'] = true;
                    col[j][board[i][j] - '1'] = true;
                    s[i/3][j/3][board[i][j] - '1'] = true;
                }
            }
        }
        return true;
    }
};
// @lc code=end
