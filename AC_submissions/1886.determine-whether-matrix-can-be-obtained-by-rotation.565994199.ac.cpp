/*
 * @lc app=leetcode id=1886 lang=cpp
 *
 * [1886] Determine Whether Matrix Can Be Obtained By Rotation
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>&vec){
        for(int i = 0; i < vec.size() / 2; i++)
            for(int j = 0; j < vec[i].size(); j++)
                swap(vec[i][j], vec[vec.size()-i-1][j]);
        for(int i = 0; i < vec.size(); i++)
            for(int j = i + 1; j < vec.size(); j++)
                swap(vec[i][j], vec[j][i]);
    }
    bool check(vector<vector<int>>& vec1, vector<vector<int>>& vec2){
        for(auto i = 0; i < vec1.size(); i++)
            for(int j = 0; j < vec1[i].size(); j++)
                if(vec1[i][j] != vec2[i][j])
                    return false;
        return true;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i = 0; i < 4; i++){
            if(check(mat, target)) return true;
            rotate(mat);
        }
        return false;
    }
};
// @lc code=end
