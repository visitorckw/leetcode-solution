/*
 * @lc app=leetcode id=1764 lang=cpp
 *
 * [1764] Form Array by Concatenating Subarrays of Another Array
 */

// @lc code=start
class Solution {
public:
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) {
        string str(nums.begin(), nums.end());
        int start = 0;
        for(auto s : groups){
            string temp(s.begin(), s.end());
            int result = str.find(temp, start);
            if(result == string::npos) return false;
            start = result + temp.size();
        }
        return true;
    }
};
// @lc code=end
