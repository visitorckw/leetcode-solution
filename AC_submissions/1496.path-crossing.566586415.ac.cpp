/*
 * @lc app=leetcode id=1496 lang=cpp
 *
 * [1496] Path Crossing
 */

// @lc code=start
class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> table;
        int x = 0, y = 0;
        table.insert(make_pair(x, y));
        for(auto ch : path){
            if(ch == 'N') ++y;
            else if(ch == 'S') --y;
            else if(ch == 'E') ++x;
            else --x;
            if(table.count(make_pair(x,y))) return true;
            table.insert(make_pair(x,y));
        }
        return false;
    }
};
// @lc code=end
