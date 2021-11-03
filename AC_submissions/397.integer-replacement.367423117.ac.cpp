/*
 * @lc app=leetcode id=397 lang=cpp
 *
 * [397] Integer Replacement
 */

// @lc code=start
class Solution {
public:
    int dfs(const long long int &n, unordered_map< long long int,long long int>&table){
        if(table.find(n) != table.end())
            return table[n];
        if(! (n & 1))
            return table[n] = dfs(n / 2, table) + 1;
        
        return table[n] = min(dfs(n+1, table), dfs(n-1, table)) + 1;
    }
    int integerReplacement(int n) {
        unordered_map<long long int, long long int>table;
        table[1] = 0;
        dfs(n,table);
        return table[n];
    }
};
// @lc code=end
