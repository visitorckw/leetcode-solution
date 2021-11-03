/*
 * @lc app=leetcode id=1252 lang=cpp
 *
 * [1252] Cells with Odd Values in a Matrix
 */

// @lc code=start
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> arr(m, vector<int>(n, 0));
        for(auto inc : indices){
            for(int i = 0; i < n; i++)
                arr[inc[0]][i]++;
            for(int i = 0; i < m; i++)
                arr[i][inc[1]]++;
        }
        int ctr = 0;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(arr[i][j] & 1)
                    ++ctr;
        return ctr;
    }
};
// @lc code=end
