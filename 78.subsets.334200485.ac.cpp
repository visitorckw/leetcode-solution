/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>>ans;
    void dfs(vector<int>vec,vector<int>&nums,int n,bool take) {
        if(take)
            vec.push_back(nums[n]);
        if(n == nums.size()-1) {
            ans.push_back(vec);
            return;
        }
        dfs(vec,nums,n+1,true);
        dfs(vec,nums,n+1,false);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        const vector<int>vec;
        dfs(vec,nums,0,true);
        dfs(vec,nums,0,false);
        return ans;
    }
};
// @lc code=end
