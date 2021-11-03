/*
 * @lc app=leetcode id=1904 lang=cpp
 *
 * [1904] The Number of Full Rounds You Have Played
 */

// @lc code=start
class Solution {
public:
    
    int numberOfRounds(string startTime, string finishTime) {
        int startHour = 10 * (startTime[0] - '0') + (startTime[1] - '0');
        int startMin = 10 * (startTime[3] - '0') + (startTime[4] - '0');
        int finishHour = 10 * (finishTime[0] - '0') + (finishTime[1] - '0');
        int finishMin = 10 * (finishTime[3] - '0') + (finishTime[4] - '0');
        int start, finish;
        start = 4 * startHour + startMin / 15;
        if(startMin != 0 and startMin != 15 and startMin != 30 and startMin != 45)
            start++;
        finish = 4 * finishHour + finishMin / 15;
        if(startTime > finishTime)
            return finish + 24 * 4 - start;
        if(start > finish) return 0;
        return finish - start;
    }
    
};
// @lc code=end
