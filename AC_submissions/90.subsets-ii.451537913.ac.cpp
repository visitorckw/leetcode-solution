/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution {
public:
    unordered_map<int,int>table;
    vector<pair<int,int>> vec;
    vector<vector<int>>ans;
    void dfs(int n, vector<int>&v){
        if(n >= vec.size()){
            ans.push_back(v);
            return;
        }
        for(int i = 0; i <= vec[n].second; i++){
            for(int j = 0; j < i; j++)
                v.push_back(vec[n].first);
            dfs(n+1,v);
            for(int j = 0; j < i; j++)
                v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        for(auto x : nums)
            table[x]++;
        for(auto it : table)
            vec.push_back(make_pair(it.first,it.second));
        // for(auto it : vec){
        //     cout << it.first << ' ' << it.second << '\n';
        // }
        vector<int>t;
        dfs(0,t);
        return ans;
    }
};
// @lc code=end
