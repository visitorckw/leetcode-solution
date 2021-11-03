/*
 * @lc app=leetcode id=1200 lang=cpp
 *
 * [1200] Minimum Absolute Difference
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>>ans;
    int min = 1e9,d;
    
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i = 0; i < arr.size()-1; i++)
        {
            d = arr[i+1]-arr[i];
            if(d < min)
            {
                min = d;
                ans.clear();
                ans.push_back(vector<int>{arr[i],arr[i+1]});
            }
            else if(d == min) ans.push_back(vector<int>{arr[i],arr[i+1]});
        }
        return ans;
    }
};
// @lc code=end
