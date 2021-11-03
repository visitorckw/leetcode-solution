/*
 * @lc app=leetcode id=1232 lang=cpp
 *
 * [1232] Check If It Is a Straight Line
 */

// @lc code=start
class Solution {
public:
    int dot(const vector<int>& v1, const vector<int>& v2){
        return v1[0] * v2[1] - v1[1] * v2[0];
    }
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        vector<int>vec(2), target(2);
        target[0] = coordinates[1][0] - coordinates[0][0];
        target[1] = coordinates[1][1] - coordinates[0][1];
        for(int i = 2; i < coordinates.size(); i++){
            vec[0] = coordinates[i][0] - coordinates[0][0];
            vec[1] = coordinates[i][1] - coordinates[0][1];
            if(dot(target, vec)) return false;
        }
        return true;
    }
};
// @lc code=end
