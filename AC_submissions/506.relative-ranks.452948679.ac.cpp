/*
 * @lc app=leetcode id=506 lang=cpp
 *
 * [506] Relative Ranks
 */

// @lc code=start
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<pair<int,int>> list(nums.size()); // (score,place)
        for(int i = 0; i < nums.size(); i++)
            list[i] = make_pair(nums[i],i);
        sort(list.begin(),list.end(),greater<pair<int,int>>());
        vector<string>ans(nums.size());
        if(nums.size() >= 1) ans[list[0].second] = "Gold Medal";
        if(nums.size() >= 2) ans[list[1].second] = "Silver Medal";
        if(nums.size() >= 3) ans[list[2].second] = "Bronze Medal";
        for(int i = 3; i < list.size(); i++){
            ans[list[i].second] = to_string(i+1);
        }
        return ans;
    }
};
// @lc code=end
