/*
 * @lc app=leetcode id=1560 lang=cpp
 *
 * [1560] Most Visited Sector in  a Circular Track
 */

// @lc code=start
class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        const int start = rounds.front();
        const int end = rounds.back();
        vector<int>res;
        int i = start;
        while(true){
            res.push_back(i);
            if(i == end) break;
            i++;
            if(i > n) i = 1;
        }
        sort(res.begin(), res.end());
        return res;
    }
};
// @lc code=end
