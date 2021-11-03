/*
 * @lc app=leetcode id=1103 lang=cpp
 *
 * [1103] Distribute Candies to People
 */

// @lc code=start
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>res(num_people, 0);
        int candy = 1;
        int index = 0;
        while(candies){
            if(index >= num_people) index = 0;
            res[index] += min(candy, candies);
            candies -= min(candy, candies);
            ++candy;
            ++index;
        }
        return res;
    }
};
// @lc code=end
