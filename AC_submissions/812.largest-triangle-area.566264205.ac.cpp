/*
 * @lc app=leetcode id=812 lang=cpp
 *
 * [812] Largest Triangle Area
 */

// @lc code=start
class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double area = -1.0;
        for(int i = 0; i < points.size(); i++){
            for(int j = i + 1; j < points.size(); j++){
                for(int k = j + 1; k < points.size(); k++){
                    double x = (points[i][0] - points[j][0]) * (points[i][0] - points[j][0]);
                    x += (points[i][1] - points[j][1]) * (points[i][1] - points[j][1]);
                    x = sqrt(x);
                    double y = (points[i][0] - points[k][0]) * (points[i][0] - points[k][0]);
                    y += (points[i][1] - points[k][1]) * (points[i][1] - points[k][1]);
                    y = sqrt(y);
                    double z = (points[k][0] - points[j][0]) * (points[k][0] - points[j][0]);
                    z += (points[k][1] - points[j][1]) * (points[k][1] - points[j][1]);
                    z = sqrt(z);
                    double s = (x + y + z) / 2.0;
                    area = max(area, sqrt(s*(s-x)*(s-y)*(s-z)));
                }
            }
        }
        return area;
    }
};
// @lc code=end
