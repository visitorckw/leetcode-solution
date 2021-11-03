/*
 * @lc app=leetcode id=575 lang=cpp
 *
 * [575] Distribute Candies
 */

// @lc code=start
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(), candyType.end());
        const int canEat = candyType.size() / 2;
        int eat = 0;
        for(auto i = 0; i < candyType.size(); i++){
            if(i and candyType[i] == candyType[i-1]) continue;
            ++eat;
            if(eat >= canEat) break;
        }
        return eat;
    }
};
// @lc code=end
