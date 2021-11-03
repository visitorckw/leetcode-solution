/*
 * @lc app=leetcode id=1329 lang=cpp
 *
 * [1329] Sort the Matrix Diagonally
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<int>vec;
        for(int x = 0; x < mat.size(); x++){
            const int X = x;
            const int Y = 0;
            int i = X, j = Y;
            vec.clear();
            while(i < mat.size() and j < mat[0].size()){
                vec.push_back(mat[i++][j++]);
            }
            sort(vec.begin(), vec.end());
            i = X;
            j = Y;
            int p = 0;
            while(i < mat.size() and j < mat[0].size()){
                mat[i++][j++] = vec[p++];
            }
        }
        for(int y = 0; y < mat[0].size(); y++){
            const int X = 0;
            const int Y = y;
            int i = X, j = Y;
            vec.clear();
            while(i < mat.size() and j < mat[0].size()){
                vec.push_back(mat[i++][j++]);
            }
            sort(vec.begin(), vec.end());
            i = X;
            j = Y;
            int p = 0;
            while(i < mat.size() and j < mat[0].size()){
                mat[i++][j++] = vec[p++];
            }
        }
        return mat;
    }
};
// @lc code=end
