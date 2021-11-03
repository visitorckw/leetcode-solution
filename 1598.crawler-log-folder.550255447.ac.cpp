/*
 * @lc app=leetcode id=1598 lang=cpp
 *
 * [1598] Crawler Log Folder
 */

// @lc code=start
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int now = 0;
        for(string str : logs){
            if(str == "../") now--;
            else if(str == "./") continue;
            else now++;
            if(now < 0) now = 0;
        }
        return now;
    }
};
// @lc code=end
