/*
 * @lc app=leetcode id=1584 lang=cpp
 *
 * [1584] Min Cost to Connect All Points
 */

// @lc code=start
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int res = 0;
        vector<bool>visit(points.size(), false);
        vector<int>d(points.size(), INT_MAX);
        d[0] = 0;
        for(int times = 0; times < points.size(); times++){
            int node = 0;
            int mini = INT_MAX;
            for(int i = 0; i < points.size(); i++){
                if(!visit[i] and d[i] < mini){
                    mini = d[i];
                    node = i;
                }
            }
            res += d[node];
            visit[node] = true;
            for(int i = 0; i < points.size(); i++){
                if(visit[i]) continue;
                const int dis = abs(points[node][0] - points[i][0]) + abs(points[node][1] - points[i][1]);
                if(d[i] > dis)
                    d[i] = dis;
            }
        }
        return res;
    }
};
// @lc code=end
