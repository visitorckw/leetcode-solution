/*
 * @lc app=leetcode id=888 lang=cpp
 *
 * [888] Fair Candy Swap
 */

// @lc code=start
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int>res(2);
        int sum1 = 0, sum2 = 0;
        unordered_set<int> table;
        for(auto x : aliceSizes){
            sum1 += x;
            table.insert(x);
        }
        for(auto x : bobSizes){
            sum2 += x;
        }
        const int target = (sum1 - sum2) / 2;
        for(auto x : bobSizes){
            if(table.count(x + target)){
                res[0] = x + target;
                res[1] = x;
                break;
            }
        }
        return res;
    }
};
// @lc code=end
