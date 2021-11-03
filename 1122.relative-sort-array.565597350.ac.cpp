/*
 * @lc app=leetcode id=1122 lang=cpp
 *
 * [1122] Relative Sort Array
 */

// @lc code=start
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int>table;
        for(auto x : arr1) table[x]++;
        vector<int> res(arr1.size());
        int p = 0;
        for(auto x : arr2)
            while(table[x]--)
                res[p++] = x;
        vector<int> left;
        for(auto it : table)
            if(it.second)
                for(int i = 0; i < it.second; i++)
                    left.push_back(it.first);
        sort(left.begin(), left.end());
        for(auto x : left)
            res[p++] = x;
        return res;
    }
};
// @lc code=end
