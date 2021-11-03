/*
 * @lc app=leetcode id=1450 lang=cpp
 *
 * [1450] Number of Students Doing Homework at a Given Time
 */

// @lc code=start
class Solution {
public:
    
    int ans = 0;
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        for(int i = 0; i < startTime.size(); i++){
            if(startTime[i] <= queryTime && queryTime <= endTime[i])
                ++ans;
        }
        
        return ans;
    }
};
// @lc code=end
