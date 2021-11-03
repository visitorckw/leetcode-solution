/*
 * @lc app=leetcode id=1828 lang=cpp
 *
 * [1828] Queries on Number of Points Inside a Circle
 */

// @lc code=start
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>res(queries.size(),0);
        int ptr = 0;
        for(auto q : queries){
            for(auto p : points){
                if((p[0]-q[0])*(p[0]-q[0]) + (p[1]-q[1])*(p[1]-q[1]) <= q[2]*q[2]){
                    ++res[ptr];
                }
            }
            ++ptr;
        }
        return res;
    }
};
// @lc code=end
