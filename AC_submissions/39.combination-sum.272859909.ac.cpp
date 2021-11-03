/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>>ans;
    vector<int> list;
    void dfs(int target,int p,vector<int>vec)
    {
        for(int i = p; i < list.size(); i++)
        {
            if(target > list[i]) 
            {
                vec.push_back(list[i]);
                dfs(target - list[i],i,vec);
                vec.pop_back();
            }
            else if(!(target - list[i]))
            {
                vec.push_back(list[i]);
                ans.push_back(vec);
                vec.pop_back();
            }
            else break;
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        list = candidates;
        sort(list.begin(),list.end());
        dfs(target,0,{});
        return ans;
    }
};
// @lc code=end
