/*
 * @lc app=leetcode id=1346 lang=cpp
 *
 * [1346] Check If N and Its Double Exist
 */

// @lc code=start
class Solution {
public:
    unordered_set<int> table;
    bool checkIfExist(vector<int>& arr) {
        for(auto x : arr){
            if(table.count(x * 2)) return true;
            if(!(x & 1) and table.count(x / 2)) return true;
            table.insert(x);
        }
        return false;
    }
};
// @lc code=end
