/*
 * @lc app=leetcode id=1629 lang=cpp
 *
 * [1629] Slowest Key
 */

// @lc code=start
class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char res = keysPressed[0];
        int t = releaseTimes[0];
        for(int i = 1; i < keysPressed.size(); i++){
            int tmp = releaseTimes[i] - releaseTimes[i-1];
            if(tmp > t or (tmp == t and keysPressed[i] > res)){
                t = tmp;
                res = keysPressed[i];
            }
        }
        return res;
    }
};
// @lc code=end
