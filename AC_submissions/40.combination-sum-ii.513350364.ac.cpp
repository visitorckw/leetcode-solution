/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 */

// @lc code=start
class Solution {
public:
    unordered_map<int, int>table;
    vector<pair<int,int>> vec;
    vector<vector<int>> ans;
    vector<int> state;
    void dfs(const int pos, int target){
        if(!target){
            ans.push_back(state);
            return;
        }
        if(pos >= vec.size() or target < 0) return;
        dfs(pos+1, target);
        for(int i = 0; i < vec[pos].second; i++){
            target -= vec[pos].first;
            state.push_back(vec[pos].first);
            dfs(pos+1, target);
        }
        for(int i = 0; i < vec[pos].second; i++) state.pop_back();
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        for(auto x : candidates)
            table[x]++;
        for(auto it : table)
            vec.push_back(it);
        dfs(0, target);
        return ans;
    }
};
// @lc code=end
