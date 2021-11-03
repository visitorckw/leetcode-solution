/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    
    /*static bool cmp(const vector<int>&a,const vector<int>&b)
    {
        if(a[0] == b[0]) return a[1] < b[1];
        return a[0] < b[0];
    }*/
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()) return vector<vector<int>>();
        sort(intervals.begin(),intervals.end());
        for(int i = 0; i < intervals.size()-1; i++)
        {
            if(intervals[i][1] >= intervals[i+1][1]) 
            {
                intervals[i+1][0] = intervals[i][0];
                intervals[i+1][1] = intervals[i][1];
            }
            else if(intervals[i][1] < intervals[i+1][0]) ans.push_back(intervals[i]);
            else intervals[i+1][0] = intervals[i][0];
        }
        ans.push_back(intervals.back());
        return ans;
    }
};
// @lc code=end
