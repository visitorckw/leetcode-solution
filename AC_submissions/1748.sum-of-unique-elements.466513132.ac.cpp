/*
 * @lc app=leetcode id=1748 lang=cpp
 *
 * [1748] Sum of Unique Elements
 */

// @lc code=start
class Solution {
public:
    unordered_map<int,int> table;
    int sum = 0;
    int sumOfUnique(vector<int>& nums) {
        for(auto x : nums)
            table[x]++;
        for(auto it : table)
            if(it.second == 1)
                sum += it.first;
        return sum;
    }
};
// @lc code=end
