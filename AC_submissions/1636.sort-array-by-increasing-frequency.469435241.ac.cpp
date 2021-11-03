/*
 * @lc app=leetcode id=1636 lang=cpp
 *
 * [1636] Sort Array by Increasing Frequency
 */

// @lc code=start
class Solution {
public:
    vector<pair<int,int>> vec;
    static bool cmp(const pair<int,int>&p1, const pair<int,int>&p2){
        if(p1.second == p2.second)
            return p1.first > p2.first;
        return p1.second < p2.second;
    }
    unordered_map<int,int> table;
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(auto x : nums)
            table[x]++;
        for(auto it : table)
            vec.push_back(it);
        sort(vec.begin(), vec.end(), cmp);
        int ctr = 0;
        for(auto p : vec){
            for(int i = 0; i < p.second; i++){
                ans[ctr++] = p.first;
            }
        }
        return ans;
    }
};
// @lc code=end
