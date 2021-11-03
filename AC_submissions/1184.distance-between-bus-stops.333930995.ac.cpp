/*
 * @lc app=leetcode id=1184 lang=cpp
 *
 * [1184] Distance Between Bus Stops
 */

// @lc code=start
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int dis1 = 0, dis2 = 0;
        if(start > destination)
            swap(start,destination);
        for(int i = start; i < destination; i++)
            dis1 += distance[i];
        for(int i = destination; i != start; i = (i + 1) % distance.size())
            dis2 += distance[i];
        return dis1 < dis2 ? dis1 : dis2;
    }
};
// @lc code=end
