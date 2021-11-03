/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0;
        unordered_map<int,int> table;
        table[0] = 1;
        int sum = 0;
        for(auto x : nums){
            sum += x;
            auto it = table.find(k-sum);
            if(it != table.end())
                res += it->second;
            table[-sum]++;
        }
        return res;
    }
};
// @lc code=end
