/*
 * @lc app=leetcode id=401 lang=cpp
 *
 * [401] Binary Watch
 */

// @lc code=start
class Solution {
public:
    vector<string> res;
    vector<bool>state;
    void dfs(const int depth, const int left){
        if(depth >= 10){
            if(left) return;
            int hr = 0;
            int min = 0;
            for(int i = 0; i < 4; i++)
                hr += state[i] * (1 << i);
            for(int i = 0; i < 8; i++)
                min += state[i+4] * (1 << i);
            if(hr >= 12 || min >= 60) return;
            res.push_back(min < 10 ? to_string(hr) + ":0" + to_string(min) : to_string(hr) + ":" + to_string(min));
            return;
        }
        dfs(depth+1, left);
        if(left){
            state[depth] = true;
            dfs(depth+1, left-1);
            state[depth] = false;
        }
    }
    vector<string> readBinaryWatch(int turnedOn) {
        state = vector<bool>(10);
        dfs(0, turnedOn);
        return res;
    }
};
// @lc code=end
