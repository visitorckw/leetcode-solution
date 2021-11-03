/*
 * @lc app=leetcode id=1854 lang=cpp
 *
 * [1854] Maximum Population Year
 */

// @lc code=start
class Solution {
public:
    int ans = 0;
    int p = 0;
    int maximumPopulation(vector<vector<int>>& logs){
        vector<int>sum(200,0);
        for(auto log: logs){
            for(int i = log[0]; i < log[1]; i++){
                if(++sum[i-1950] > p or (sum[i-1950] == p and i < ans)){
                    ans = i;
                    p = sum[i-1950];
                }
            }
        }
        return ans;
    }
};
// @lc code=end
