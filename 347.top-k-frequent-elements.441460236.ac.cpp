/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    unordered_map<int,int> table;
    vector<pair<int,int>> vec;
    vector<int>res;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        for(auto x : nums) table[x]++;
        for(auto it : table){
            vec.push_back(make_pair(it.second, it.first));
        }
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());
        for(int i = 0; i < k; i++)
            res.push_back(vec[i].second);
        return res;
    }
};
// @lc code=end
